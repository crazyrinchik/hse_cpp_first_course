#include <iostream>
#include <fstream>
#include <sstream>

void findAndReplaceInFile(const std::string& filePath, const std::string& toFind, const std::string& toReplace)
{
    std::ifstream inputFile(filePath);
    std::ofstream outputFile("output.txt");
    std::string s;
    while (getline(inputFile, s))
    {
        size_t pos = s.find(toFind); 
        s.replace(pos, toFind.length(), toReplace);
        outputFile << s;
    }

    inputFile.close();
    outputFile.close();
};

int main()
{
    findAndReplaceInFile("file.txt", "oldWord", "newWord");    
    return 0;
}
