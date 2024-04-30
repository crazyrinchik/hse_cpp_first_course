#include <iostream>

int main()
{
    int arraySize;
    std::cin >> arraySize;

    int *array = new int[arraySize];
    for (int i = 0; i < arraySize; ++i) std::cin >> array[i];
    int *max = array;
    for (int i = 0; i < arraySize; ++i) if (array[i] > *max) max = &array[i];

    std::cout << *max << std::endl;

    delete[] array;
    
    return 0;
}
