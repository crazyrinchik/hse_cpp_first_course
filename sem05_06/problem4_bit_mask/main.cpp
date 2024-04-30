#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::bitset<32> n_bits (n);

    if (n_bits[k]) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;

    return 0;
}
