#include <iostream>

// cout << ( insertion operator )
// cin >> ( extraction operator )

int main()
{

    std::string name;
    int age;
    std::cout << "what's your name?:";
    // std::cin >> name;

    std::cout << "what's your age?:";
    std::cin >> age;

    std::cout << "what's your full name?:";
    std::getline(std::cin >> std::ws, name); //spaceがある場合をフォロー・getline関数の前にcinを使用すると挙動がおかしくなるので、wsで抽出する

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}