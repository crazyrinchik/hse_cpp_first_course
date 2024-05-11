#include <fstream>
#include <iostream>
#include <cctype>

void convertToLowercase(const std::string& inputFilePath, const std::string& outputFilePath)
{
    std::ifstream inputFile(inputFilePath);
    std::ofstream outputFile(outputFilePath);

    char ch;
    while (inputFile.get(ch))
    {
        outputFile << static_cast<char>(std::toupper(ch));
    }

    inputFile.close();
    outputFile.close();
}

int main()
{
    convertToLowercase("input.txt", "output_uppercase.txt");
  
    return 0;
}
