#include <fstream>
#include <iostream>
#include <string>

void reverseFileContent(const std::string& inputFilePath, const std::string& outputFilePath)
{
    std::ifstream inputFile(inputFilePath);
    std::ofstream outputFile(outputFilePath);
    std::string s;
    while (getline(inputFile, s))
    {
        std::string s2 = "";
        for (int i = 1; i <= s.length(); i++)
        {
            s2 += s[s.length() - i];
        }
        outputFile << s2;
    }

    inputFile.close();
    outputFile.close();
};

int main()
{
    reverseFileContent("input.txt", "reversed_output.txt");
    return 0;
}
