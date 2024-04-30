#include <iostream>

int main()
{
    int m, n;
    char repeat;

    do {
        std::cin >> m >> n;
        std::string line = "\t";

        for (int l = 1; l < n+1; l++) 
        {
            line += std::to_string(l) + "\t";
        }

        std::cout << line << std::endl;

        for (int i = 1; i <= m; i++) 
        {
            line = std::to_string(i) + "\t";
            for (int j = 1; j < n+1; j++) 
            {
                int product = i * j;
                line += std::to_string(product) + "\t";
            }
            std::cout << line << std::endl;
        }
        
        std::cout << "Do you want to repeat? (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y');

    return 0;
}
