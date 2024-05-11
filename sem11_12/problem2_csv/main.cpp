#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

void Create(const std::string& filePath)
{
    std::ofstream file(filePath);

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[0]
                >> arr[1]
                >> arr[2]
                >> arr[3]
                >> arr[4];

        file << arr[0] << ","
                << arr[1] << ","
                << arr[2] << ","
                << arr[3] << ","
                << arr[4] << ","
                << "\n";
    }
}

std::vector<std::vector<std::string>> readCSV(const std::string& filePath)
{
    std::ifstream input(filePath);
    std::string str, word;
    std::vector<std::vector<std::string>> csv_file;
    std::vector<std::string> words;

    while(std::getline(input, str))
    {
        words.clear();

        std::stringstream row(str);
        while (getline(row, word, ','))
        {
            words.push_back(word);
        }

        csv_file.push_back(words);
    }

    input.close();
    return csv_file;
}

int main()
{
    Create("/Users/crazyrinchik/Desktop/read.csv");
    std::vector<std::vector<std::string>> file_info;
    file_info = readCSV("/Users/crazyrinchik/Desktop/read.csv");

    std::vector<float> average;
    for(int i = 0; i < file_info[0].size(); i++) average.push_back(0);

    for (auto num : file_info)
    {
        for (int j = 0; j < num.size(); j++)
        {
            average[j] += std::stof(num[j]);
        }
    }

    for(int i = 0; i < file_info[0].size(); i++)
    {
        average[i] /= file_info[0].size();
    }

    for (auto i : average) std::cout << i << ' ';
    
    return 0;
}
