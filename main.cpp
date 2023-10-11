#include <iostream>

int main()
{

    // std::string car[] = {"Corvette","Mustang","Carmy"};
    std::string car[3];
    car[0] = "Camaro";
    car[1] = "Mustang";
    car[2] = "Carmy";

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    // double prices[] = {5.00,7.50,9.99,15.00};
    double prices[4];
    prices[0] = 5.00;
    prices[1] = 7.50;
    prices[2] = 9.99;
    prices[3] = 15.00;

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}
