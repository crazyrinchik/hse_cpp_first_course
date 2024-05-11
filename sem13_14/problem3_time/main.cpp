#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>

struct Time 
{
    int hours;
    int minutes;
    int seconds;
    Time(int h1, int m1, int s1, int h2, int m2, int s2){
        int total_s1 = h1 * 3600 + m1 * 60 + s1;
        int total_s2 = h2 * 3600 + m2 * 60 + s2;
        int diff = std::max(0, total_s1 - total_s2);
        hours = diff / 3600;
        minutes = (diff % 3600) / 60;
        seconds = diff % 60;
    }

    void print(){
        std::cout << hours << ':' << minutes << ':' << seconds << std::endl;;
    }
};

int main()
{
    Time Time1(1, 30, 30, 2, 30, 30);
    Time1.print();
    return 0;
}
