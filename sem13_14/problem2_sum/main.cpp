#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>

struct car { // default - public

    private:
        int year, doors;
        double fuel_level, mileage;
        std::string color;

    public:
    car(int q, std::string w, int e, double r = 123.45, double t = 123456.789){
        year = q;
        color = w;
        doors = e;
        fuel_level = r;
        mileage = t;
    }

    void print_car_settings(){
        std::cout << year << ' ' << color << ' ' << doors << ' ' << fuel_level << ' ' << mileage << std::endl;
    }

    void drive(double distance) {
        double fuel = distance / 10;
        if (fuel_level >= fuel) 
        {
            fuel_level -= fuel;
            mileage += distance;
        }
    };

    void refuel(double amount) {
        fuel_level += amount;
    }

    void stop() {
        std::cout << year << ' ' << color << "Stopped" << std::endl;
    }
    std::string getColor() {
        return color;
    }
    void setColor(std::string new_color) {
        color = new_color;
    }
    friend std::ostream &operator<<(std::ostream &os, const car &c);
    friend std::istream &operator>>(std::istream &is, car &c);
};

std::ostream &operator<<(std::ostream &os, const car &c)
{
    os << c.year << ' ' << c.color << ' ' << c.doors << ' ' << c.fuel_level << ' ' << c.mileage << '\n';
    return os;
}
std::istream &operator>>(std::istream &is, car &c)
{
    is >> c.year >> c.color >> c.doors >> c.fuel_level >> c.mileage;
    return is;
}

int main()
{
    car car1(1950, "GREEN", 4);
    std::ifstream fileIn("input.txt");
    fileIn >> car1;
    std::ofstream fileOut("output.txt");
    fileOut << car1;
    return 0;
}
