#include <iostream>
#include <cstdarg>

int sum(int count, ...)
{
    int res = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) res += va_arg(args, int);
  
    return res;
}

int main()
{
    auto res = sum(2, 2, 3, 4, 5, 6);
    std::cout << res;

    return 0;
}
