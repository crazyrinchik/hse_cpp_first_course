#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    std::string s;
    while (getline(inputFile, s))
    {
        if (s != "")
        {
            outputFile << s << "\n";
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
