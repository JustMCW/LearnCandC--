// from ch2.8
// don't u think it will be tedious to have to add all functions for forward declaration ?
// this is what header is for !
// Adding a header file to a project works analogously to adding a source file



#include <iostream> // this is a header
// int add(int x, int y); instead of this (in real life u need like 10 of these)
// we do this !
#include "add.h"

// have i mentioned it before ? #include actually just copies the content of that file to the location

// note no need to include the header file for compile argument

int main()
{
    int a = add(3,1000);
    std::cout << a << std::endl;

    return 0;
}
