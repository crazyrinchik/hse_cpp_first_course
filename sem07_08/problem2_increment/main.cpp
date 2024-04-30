#include <iostream>

template<typename T>
T increment(T num)
{
    return num + 1;
}

int main()
{
    std::cout << increment(1) << '\n' << increment(12.32442) << '\n' << increment("Hello, world!");
  
    return 0;
}
