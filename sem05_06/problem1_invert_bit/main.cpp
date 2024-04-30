#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    int xor1 = n ^ (1 << (k - 1));
    std::cout << std::bitset<32>(xor1) << std::endl;
    std::cout << xor1 << std::endl;

    return 0;
}
