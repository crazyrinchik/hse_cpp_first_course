#include <iostream>

void executeCallback(void (*callback)())
{
    callback();
}

void print()
{
    executeCallback(print);
}

int main()
{
    print();

    return 0;
}
