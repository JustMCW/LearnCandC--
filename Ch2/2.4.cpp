
#include <iostream>

// Doubles a number and returns it
int double_number(int x)
{
    return x * 2;
}

int main()
{
    int input{};
    std::cout << "Enter a number : ";
    std::cin >> input;
    std::cout << double_number(input) << std::endl;

    return 0;
}
