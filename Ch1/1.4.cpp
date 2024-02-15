
int main()
{
    
    int a;   // uninit
    int b{}; // List initialization

    int width{5};     // direct list initialization of value 5 into variable width
    int height = {6}; // copy list initialization of value 6 into variable height
    [[maybe_unused]] int depth{};  // value initialization 
    // [[maybe]] just makes the compiler ignore the fact that it is unused

    int num{100}; // Aparently this is more modern, cuz it do good thing such as preventing narrowing conversions.

    // always initialize your variable they say...
    char c{}; // null character
    char d;

    return 0;
}
