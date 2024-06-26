#include <fstream>
#include <iostream>

void reverseCopyBinaryFile(const std::string& inputFilePath, const std::string& outputFilePath)
{
    std::ifstream inputFile(inputFilePath, std::ios::binary);
    std::ofstream outputFile(outputFilePath, std::ios::binary);

    char c;
    while(inputFile.get(c))
    {
        char c2;
        c2 ^= c;
        outputFile << c2;
    }

    inputFile.close();
    outputFile.close();
}

int main()
{
    reverseCopyBinaryFile("input_binary.bin", "output_reversed.bin");
    return 0;
}
