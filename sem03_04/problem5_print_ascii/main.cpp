#include <iostream>

int main()
{
    for (int i = 32; i < 127; i++) {
        std::cout << char(i) << "\t";
    }
    return 0;
}
