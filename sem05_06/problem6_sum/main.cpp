#include <iostream>

int main()
{
    int *a, *b, n, k;
    std::cin >> n >> k;

    a = &n;
    b = &k;
    int s = *a + *b;
  
    std::cout << s << std::endl;

    return 0;
}
