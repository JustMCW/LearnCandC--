#include <iostream>

// Add is in a different file lol hell yeah
int add(int x, int y);

// Do not #include “add.cpp” from main.cpp. ( lol still works )
// This will cause the preprocessor to insert the contents of add.cpp directly into main.cpp instead of treating them as separate files.
// #include "add.cpp"

// Oh wait shit, compiling them all together allows you have shared global variables !? (using forward declaration to prevent compile error)

int main()
{
    int a = add(3,1000);
    std::cout << a << std::endl;

    return 0;
}
