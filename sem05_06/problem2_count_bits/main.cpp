#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int count = 0;

    std::bitset<32> n_bits (n);
    while (n) 
    {
        count += n & 1;
        n >>= 1;
    } 

    std::cout << count << std::endl;

    return 0;
}
