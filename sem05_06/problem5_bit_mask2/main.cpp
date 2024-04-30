#include <iostream>

int main()
{      
    int n, k;
    std::cin >> n >> k;
    std::bitset<32> n_bits (n);

    n_bits[k] = 1;

    std::cout << n_bits << std::endl;
    std::cout << n << std::endl;
  
    return 0;
}
