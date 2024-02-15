#include <iostream>
#include <math.h>

double calculate(double x, double y, char math_operator)
{
    switch (math_operator) {
        case '+':
            return x+y;
        case '-':
            return x-y;
        case '*':
            return x*y;
        case '/':
            return x/y;
        default:
            return NAN;
    }
}

int main()
{
    std::cout << "Enter x: ";
    double x;
    std::cin >> x;
    std::cout << "Enter y: ";
    double y;
    std::cin >> y;

    std::cout << "Enter operator: ";
    char math_operator;
    std::cin >> math_operator;

    double result = calculate(x,y, math_operator);

    std::cout << x << math_operator << y << "=" << result << std::endl;


    return 0;
}
