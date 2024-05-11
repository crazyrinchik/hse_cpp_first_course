#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

// Alias for vector of strings
using VecStrings = std::vector<std::string>;

// Utility functions
std::string extractSurname(const std::string& fullName) {
    std::istringstream stream(fullName);
    std::string surname;
    getline(stream, surname, ';');
    return surname;
}

VecStrings getSurvivorSurnames(std::ifstream& inputFile) {
    VecStrings survivors;
    std::string line;
    getline(inputFile, line); 

    while (getline(inputFile, line)) {
        std::stringstream lineStream(line);
        std::string cell;
        std::vector<std::string> row;

        while (getline(lineStream, cell, ',')) {
            row.push_back(cell);
        }

        if (row[1] == "1") { 
            survivors.push_back(extractSurname(row[3]));
        }
    }
    return survivors;
}

void printVec(const VecStrings& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << i + 1 << ") " << vec[i] << std::endl;
    }
}

double getFareForClass(std::ifstream& inputFile, int pclass) {
    inputFile.clear();
    inputFile.seekg(0, std::ios::beg);
    
    std::string line;
    getline(inputFile, line); // Skip header

    double totalFare = 0;
    int totalCount = 0;

    while (getline(inputFile, line)) {
        std::stringstream lineStream(line);
        std::string cell;
        std::vector<std::string> row;

        while (getline(lineStream, cell, ',')) {
            row.push_back(cell);
        }

        if (std::stoi(row[2]) == pclass) { 
            totalFare += std::stod(row[9]);
            totalCount++;
        }
    }

    return totalCount > 0 ? totalFare / totalCount : 0.0;
}

template<typename Iterator>
void printVecIter(Iterator begin, Iterator end) {
    for (auto it = begin; it != end; ++it) {
        std::cout << *it << std::endl;
    }
}

int main() {
    const std::string fileName = "../../../data/titanic/titanic.csv";
    std::ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open file: " << fileName << std::endl;
        return 1;
    }

    VecStrings survivors = getSurvivorSurnames(inputFile);

    std::sort(survivors.begin(), survivors.end());
    std::reverse(survivors.begin(), survivors.end());

    printVec(survivors);

    inputFile.clear(); 
    inputFile.seekg(0, std::ios::beg); 

    double meanFareFirstClass = getFareForClass(inputFile, 1);
    std::cout << "Mean Fare for First Class: " << meanFareFirstClass << std::endl;

    inputFile.close();

    std::cout << "Straightforward order:" << std::endl;
    printVecIter(survivors.begin(), survivors.end());

    std::cout << "Reverse order:" << std::endl;
    printVecIter(survivors.rbegin(), survivors.rend());

    return 0;
}
