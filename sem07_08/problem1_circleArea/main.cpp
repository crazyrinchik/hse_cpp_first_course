#include <iostream>
#include <cmath>

double circle_area(double radius)
{
    return M_PI * radius * radius;
}

int main()
{
    double radius;
    std::cin >> radius;
    std::cout << circle_area(radius);

    return 0;
}
