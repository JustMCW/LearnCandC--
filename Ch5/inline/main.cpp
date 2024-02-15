// inline keyword

// Old method
// useless now cuz compiler can ignore
// and compiler inline better than you
inline int min(int a, int b)
{
    return a>b ? b : a;
}


// New (modern) method
// inline is now used for functions that may have mutiple declarations
// those declarations must match otherwise linker error is thrown
// inline double pi() { return 3.14; }

#include <iostream>
#include "pi.h"

double circumfrance(double r);

int main()
{
    std::cout << "value of pi = "  << pi() << std::endl;
    int r {3};

    std::cout << "C = " << circumfrance(static_cast<double>(r)) << std::endl;
 
    return 0;
}
