#include <iostream>
#include <cmath>

/**
 * 以下のリファレンスがある
 * https://cplusplus.com/reference/cmath/
*/

int main()
{

    // double x = 3;
    // double y = 4;
    // double z;

    // z = std::max(x,y);
    // z = std::min(x,y);
    // z = pow(2,4);
    // z = sqrt(9);

    // std::cout << z;

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    /*
    a = pow(a, 2);
    b = pow(b, 2);
    c= sqrt(a+b);
    */
    c= sqrt(pow(a, 2)+pow(b, 2));

    std::cout << "side C: " << c;

    return 0;
}