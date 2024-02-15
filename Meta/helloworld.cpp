
#include <iostream>
#include <limits>

int main()
{
    int d;
    // std::cout << d << std::endl;
    // d++;
    std::cout << "Hello world from C++ ! YAY !!!!\n";
    std::cout << "F9 to add a debug point"<< std::endl;
    std::cout << "F5 to run and resume" << std::endl;
    std::cout << "just read the doc ngl bro" << std::endl;
    
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get();
    return 0;       
}
