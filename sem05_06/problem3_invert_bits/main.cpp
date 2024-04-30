#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    std::cout << std::bitset<32>(~n) << std::endl;
    std::cout << ~n << std::endl; 

    return 0;
}
