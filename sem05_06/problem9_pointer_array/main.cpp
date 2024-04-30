#include <iostream>

int main()
{
    int arraySize, counter = 0;
    std::cin >> arraySize;

    int *array = new int[arraySize];
    for (int i = 0; i < arraySize; ++i) std::cin >> array[i];
    int *count = &counter;
    for (int i = 0; i < arraySize; ++i) if (*count < array[i]) *count += 1;

    std::cout << *count << std::endl;
    delete[] array;

    return 0;
}
