#include <iostream>

class Human{
    public:
        std::string name = "Rick";
        std::string occupation = "scientist";
        int age;
        void eat(){
            std::cout << "This person is eating" <<'\n';
        }
        void drink(){
            std::cout << "This person is drinking" <<'\n';
        }
        void sleep(){
            std::cout << "This person is sleeping" <<'\n';
        }
};
class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
        void accelerate(){
            std::cout << "You step on the gas!" <<'\n';
        }
        void brake(){
            std::cout << "You step on the breaks!" <<'\n';
        }
};
int main()
{

    // Human human1;

    // human1.name = "Rick";
    // human1.occupation = "scientist";
    // human1.age = 70;

    // std::cout << human1.name <<'\n';
    // std::cout << human1.occupation <<'\n';
    // std::cout << human1.age <<'\n';

    // human1.eat();
    // human1.drink();
    // human1.sleep();

    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    std::cout << car1.make <<'\n';
    std::cout << car1.model <<'\n';
    std::cout << car1.year <<'\n';
    std::cout << car1.color <<'\n';

    car1.accelerate();
    car1.brake();

    return 0;
}
