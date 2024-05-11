#include <fstream>
#include <iostream>
#include <vector>


void createMatrix(const std::string& filePath, int size)
{
    std::ofstream file(filePath);

    std::vector<std::vector<int>> matrix;
    std::vector<int> row;
    for (int i = 0; i < size; i++)
    {
        matrix.push_back(row);
        for (int j = 0; j < size; j++) matrix[i].push_back(0);
    }

    int counter = 1, start = 0;
    for (int i = 0; i < size / 2 + 1; i++)
    {
        //Horizontal
        for (int j = start; j < size - start; j++)
        {
            matrix[i][j] = counter;
            std::cout << "i: " << i << "\tj: " << j << "\tcounter: " << counter << "\t\t";
            counter++;
        }
        std::cout << '\n';
        start++;

        //Vertical
        for (int j = start; j < size + 1 - start; j++)
        {
            matrix[j][size - start] = counter;
            std::cout << "i: " << j << "\tj: " << size - start << "\tcounter: " << counter << "\t\t";
            counter++;
        }
        std::cout << '\n';

        //Horizontal
        for (int j = size - 1 - start; j >= start - 1; j--)
        {
            matrix[size - 1 - i][j] = counter;
            std::cout << "i: " << size - 1 - i << " \tj: " << j << "\tcounter: " << counter << "\t\t";
            counter++;
        }
        std::cout << '\n';

        //Vertical
        for (int j = size - 1 - start; j >= start; j--)
        {
            matrix[j][start - 1] = counter;
            std::cout << "i: " << j << "\tj: " << start - 1 << "\tcounter: " << counter << "\t\t";
            counter++;
        }
        std::cout << "\n\n";
    }

    for (auto num : matrix)
    {
        for (int j = 0; j < size; j++)
        {
            file << num[j] << '\t';
        }
        file << '\n';
    }

    file.close();
}

int main()
{
    std::ifstream file("/Users/senya/CLionProjects/Plusi dla loxov/week6/problem4_snake/input.txt");
    std::string n;
    file >> n;
    file.close();

    createMatrix("/Users/senya/CLionProjects/Plusi dla loxov/week6/problem4_snake/file.txt", std::stoi(n));
    return 0;
}
