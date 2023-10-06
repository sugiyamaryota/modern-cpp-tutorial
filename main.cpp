#include <iostream>
#include <cmath>

int main()
{
    // int month;
    // std::cout << "Enter the month（1-12）:";
    // std::cin >> month;

    // switch (month) {
    // case 1:
    //     std::cout << "It is January";
    //     break;
    // case 2:
    //     std::cout << "It is Febrary";
    //     break;
    // case 3:
    //     std::cout << "It is March";
    //     break;
    // default:
    //     std::cout << "Please enter in only numbers(1-12)";
    // }

    char grade;

    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "You did great!";
            break;
        default:
            std::cout << "Please only enter in a letter grade(A-F)";
    }
    return 0;
}