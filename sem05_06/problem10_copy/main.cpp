#include <iostream>

int main()
{
    int arraySize;
    std::cin >> arraySize;

    int *arr1 = new int[arraySize];
    int *arr2 = new int[arraySize];

    for (int i = 0; i < arraySize; i++) std::cin >> arr1[i];
    for (int i = 0; i < arraySize; i++) 
    {
        int *a = &arr1[i];
        arr2[i] = *a;
    }
    for (int i = 0; i < arraySize; i++) 
    {
        std::cout << arr2[i] << " ";
    }

    return 0;
}
