#include <iostream>
#include <string>


constexpr int one()
{
    return 1;
}

int quiz()
{
    std::cout << "Enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    int length { static_cast<int>(name.length()) };

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    std::cout << "Your age + length of name is: " << age + length << std::endl;
    return 0;
}


int main()
{
    // for (int i=0; i<10; i++)
    // {
    //     std::cout << "Hello world !\n";
    // }
    quiz();
    return 0;
}
