// not getting iostream cause we got DEBUGGER !!!!

#include <cstdint>

int main()
{

    [[maybe_unused]] unsigned short s{};
    [[maybe_unused]] int i = sizeof(unsigned short);

#ifdef dont_compile_this_part
    unsigned long l;
    signed long long ll; // signed keyword is redundant, intergers are signed by default
#endif

    s = 65535; // this is the limit, 2^16 which is 2 bytes
    s += 1;    // then s will overflow, and become 0

    /*fixed width intergers, they dont change size on different devices. which is probably more consistent
    but they bad cuz not all computer have them ?
    */
    [[maybe_unused]] std::int8_t t{8};

    float f{1.0f}; // let the compiler know that its a float, float has less precison than double btw.
    double d{9.0}; // include the zero for the compiler :)
    // otherwise an unnecessary conversation occurs and maybe loss of precision

    //	std::cout << std::boolalpha; // print bools as true or false and input too
    bool b{!true};
    bool defb {}; // false

    return 0;
}
