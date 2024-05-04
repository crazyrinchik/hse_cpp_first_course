#include <fstream> 

void copyFile(const std::string& sourceFilePath, const std::string& destinationFilePath)
{
    std::ifstream sourceFile(sourceFilePath);
    std::ofstream destinationFile(destinationFilePath);
    std::string line;
    while (getline(sourceFile, line))
    {
        destinationFile << line << std::endl;
    }

    sourceFile.close();
    destinationFile.close();
};

int main()
{
    copyFile("source.txt", "destination.txt");
  
    return 0;
}
