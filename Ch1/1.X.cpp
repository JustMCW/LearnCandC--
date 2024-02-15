#include <iostream>
using namespace std;

int main() 
{
    cout << "Enter an interger: ";
    int a{};
    cin >> a;

    cout << "Enter another interger: ";
    int b{};
    cin >> b;

    cout << a << " + " << b << " is " << a + b << ".\n";
    cout << a << " - " << b << " is " << a - b << ".\n";


    return 0;
}
