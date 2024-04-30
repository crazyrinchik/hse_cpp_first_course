#include <iostream>

void print(int f)
{
    std::cout << f << '\n';
}

void print(double f)
{
    std::cout << f << '\n';
}

int main()
{
    int num_1;
    double num_2;
    std::string str;
    std::cin >> num_1 >> num_2 >> str;
    print(num_1);
    print(num_2);
    std::cout << num1 << '\n';
    std::cout << num2 << '\n'
    std::cout << str << '\n'

    return 0;
}
