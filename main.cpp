#include <iostream>
#include <vector>

int main()
{
    // Implict
    /**
        double x = (int)3.14;
        std::cout << x;
    */

    // Explict
    // char x = 100;
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions*100;
    std::cout << score << "%";

    return 0;
}