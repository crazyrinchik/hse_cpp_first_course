#include <fstream>
#include <iostream>
#include <string>

void extractLineToFile(const std::string& inputFilePath, const std::string& outputFilePath, int lineNum)
{
    std::ifstream inputFile(inputFilePath);
    std::ofstream outputFile(outputFilePath);

    std::string s;
    int count = 0;
    while (getline(inputFile, s))
    {
        count++;
        if (count == lineNum)
        {
            outputFile << s;
        };
    }
    
    inputFile.close();
    outputFile.close();
}; 

int main()
{
    extractLineToFile("input.txt", "specific_line.txt", 2);
    return 0;
}
