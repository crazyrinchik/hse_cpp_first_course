#include <iostream>

int main()
{
    int *a, *b, *c, n, k;
    std::cin >> n >> k;

    a = &n;
    b = &k;
    c = a;
    a = b;
    b = c;
    
    std::cout << *a << " " << b << std::endl;

    return 0;
}
