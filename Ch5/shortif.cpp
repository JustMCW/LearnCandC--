#include <iostream>

int main()
{
    int x = 1 + (false ? 1 : 2); // must the same type, otherwise it is converted

    return 0;
}
