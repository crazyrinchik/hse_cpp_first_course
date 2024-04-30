#include <iostream>

int transf(int n)
{
    return n * 2;
}

void transformArray(int* arr, int size, int (*transform)(int))
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = transform(arr[i]);
    }
}

int main()
{
    int size;
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) std::cin >> arr[i];

    transformArray(arr, size, transf);

    for (int i = 0; i < size; i++) std::cout << arr[i] << ' ';

    return 0;
}
