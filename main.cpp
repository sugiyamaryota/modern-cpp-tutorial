#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};
void printCar(Car &car);
void printCar(Car &car, std::string color);
int main()
{

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car1.model = "Corvette";
    car1.year = 2024;
    car1.color = "blue";

    printCar(car1, "silver");
    printCar(car2, "gold");

    printCar(car1);
    printCar(car2);

    return 0;
}
void printCar(Car &car){
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void printCar(Car &car, std::string color){
    car.color = color;
}