#include <fstream>
#include <iostream>
#include <vector>


void createMatrix(const std::string& filePath, int size)
{
    std::ofstream file(filePath);

    std::vector<std::vector<int>> matrix;
    std::vector<int> row;
    bool flag = true;

    for (int i = 0; i < size; i++)
    {
        matrix.push_back(row);

        if (flag)
        {
            for (int j = 0; j < size; j++) matrix[i].push_back(i * size + j + 1);
            flag = false;
        }
        else
        {
            for (int j = size - 1; j >= 0; j--) matrix[i].push_back(i * size + j + 1);
            flag = true;
        }
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
    std::ifstream file("/Users/senya/CLionProjects/Plusi dla loxov/week6/problem3_matrix/input.txt");
    std::string n;
    file >> n;
    file.close();

    createMatrix("/Users/senya/CLionProjects/Plusi dla loxov/week6/problem3_matrix/file.txt", std::stoi(n));
    return 0;
}
