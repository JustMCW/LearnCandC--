#include <iostream>

const double gravity_constant = 9.8;

int main()
{
    std::cout << "Enter the height in meters: ";
    double height;
    std::cin >> height;

    int i = 0;

    while (true)
    {   
        double current_h = height - (gravity_constant*i*i)/2.0;
        if (current_h < 0) {
            std::cout << "Ball is on the ground.\n";
            break;
        }
        std::cout 
            << "At " << i << " seconds, the ball is at height " 
            << current_h << "\n";
        
        i++;
    }

    return 0;
}
