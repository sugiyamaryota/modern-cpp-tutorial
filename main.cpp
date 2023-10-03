#include <iostream>

/**
 * namespaceの標準がstd
*/
namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

int main()
{
    // int x = 0;
    // std::cout << second::x;

    // using namespace first;
    // std::cout << x;

    // using namespace std;
    // string name = "Pro";
    // cout << "Hello " << name;

    using std::cout;
    using std::string;

    std::string name = "Bro";
    cout << "Hello " << name;

    return 0;
}