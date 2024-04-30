#include <iostream>
#include <cmath>

int sum_of_digits(int n)
{
    if (n == 0) return 0;
    int sum = n % 10;
    sum += sum_of_digits(n / 10);

    return sum;
}

int main()
{
    int num;
    std::cin >> num;
    std::cout << sum_of_digits(num);

    return 0;
}
