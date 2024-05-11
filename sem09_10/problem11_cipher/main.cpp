#include <fstream>
#include <iostream>
#include <cctype> // For isalpha() and tolower()

char caesarCipher(char ch, int shift)
{
    if (std::isalpha(ch)) {
        char base = std::islower(ch) ? 'a' : 'A';
        return (ch - base + shift) % 26 + base;
    }
  
    return ch;
}

void encryptFileContent(const std::string& inputFilePath, const std::string& outputFilePath, int shift = 3)
{
    std::ifstream inputFile(inputFilePath);
    std::ofstream outputFile(outputFilePath);

    char ch;
  
    while (inputFile.get(ch))
    {
        outputFile << caesarCipher(ch, shift);
    }

    inputFile.close();
    outputFile.close();
}

int main()
{
    encryptFileContent("input.txt", "encrypted.txt");
  
    return 0;
}
