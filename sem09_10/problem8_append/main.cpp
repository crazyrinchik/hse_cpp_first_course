#include <fstream>
#include <iostream>
#include <string>

void appendToFile(const std::string& filePath, const std::string& content)
{
    std::ofstream outputFile(filePath, std::ios::app);
    
    outputFile << content;
}

int main()
{
    appendToFile("file.txt", "append\n");
    return 0;
}
