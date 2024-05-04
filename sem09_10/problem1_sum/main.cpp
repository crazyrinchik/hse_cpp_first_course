#include <iostream>
#include <cmath>
#include <fstream>

int sumIntegersInFile(const std::string& inputFilePath, const std::string& outputFilePath)
{
    std::ifstream inputFile(inputFilePath);
    char n;
    int sum;
    while (inputFile.get(n)) 
    {
        if (n != ' ') 
        {
            sum += n - '0';
        }
    }
    
    inputFile.close();
  
    return sum;
};

int main() 
{
    std::cout << sumIntegersInFile("input.txt", "output.txt") << std::endl;
  
    return 0;
}
