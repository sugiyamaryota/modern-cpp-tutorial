#include <iostream>

int main()
{
    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + SIZE, "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hambuger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}
