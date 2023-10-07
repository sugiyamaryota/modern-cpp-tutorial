#include <iostream>
#include <ctime>

int main()
{
    // srand(time(0));
    // int randNum = (rand() % 5) + 1;

    // switch(randNum){
    //     case 1: std::cout << "You win a bumper sticker!\n";
    //         break;
    //     case 2: std::cout << "You win a t-shirt!\n";
    //         break;
    //     case 3: std::cout << "You win a free lunch!\n";
    //         break;
    //     case 4: std::cout << "You win a gift card!\n";
    //         break;
    //     case 5: std::cout << "You win a concert tickets!\n";
    //         break;
    // }

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) +1;

    std::cout << "****** NUMBER GUESSING GAME ******\n";

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;
        if(guess > num){
            std::cout << "Too high\n";
        }
        else if(guess < num){
            std::cout << "Too low\n";
        }
        else {
            std::cout << "CORRECT! # of tries: " << tries << '\n';
        }
    }while(guess != num);

    std::cout << "************************\n";

    return 0;
}