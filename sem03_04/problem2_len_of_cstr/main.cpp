#include <iostream>
#include <string>

size_t strlen(std::string s) 
{
    size_t n = 0;
    while ( s[n] ) n++;
    return n;
};

int main()
{
    char *str;
    std::cin >> str;
    std::cout << strlen(str) << std::endl;

    return 0;
}
