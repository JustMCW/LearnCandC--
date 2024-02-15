
#include <iostream>
#include <string>

using namespace std::string_literals;
// "hi"s // instead of Cstring, std string is used instead.


int main()
{


    std::string name{};

    // works, but only takes one word before a white space is entered.
    // std::cin >> name; 

    // so we use getline : first parameter is cin, second is variable
    // std::getline(std::cin,name);

    // "2\n"
    // however, it also captures the newline char
    // 2 is extracted, leaving 2 behind
    // then when u do getline again, '\n' is still in the buffer
    // it thinks that you entered an empty stirng so it won't give you anything

    // ws makes the getline ignore any leading whitespace characters. ( like '\n' )
    std::getline(std::cin >> std::ws ,name);

    return 0;
}


// dont pass string by value, it makes an expensive copy, use string view instead (next chapter)
// std::string can doo movoe semantic (return object without copying), but more complex

// string doesn't support constexpr

// string::length() returns unsigned (careful)
