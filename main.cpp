#include <iostream>
#include <cmath>

int main()
{
    double temp;
    char unit;
    std::cout << "*** Temperature conversion ****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) +32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }

    return 0;
}