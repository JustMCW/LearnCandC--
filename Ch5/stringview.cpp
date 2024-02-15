#include <iostream>
#include <string>

void i_take_std_string(std::string _)
{
    
}

// no copying...
void print(std::string_view s)
{
    std::cout << s << "\n";
}

/* 5.10 String view introduction and its usage */
void part1()
{
    // no copy is made, the string  is read only tho.
    std::string_view s{"Hello world!"}; 
    
    // no copy is made here too
    print(s);

    // string view can be initialized with many different type of strings
    [[maybe_unused]] std::string_view s1 {"C-style string"};
    [[maybe_unused]] std::string_view s2 {std::string("std::string")};
    [[maybe_unused]] std::string_view s3 {std::string_view("std::string_view")};

    // string view parameters can still take other strings (implcitly converted)
    print("I'm a C-string!");


    // Error, as string_view doesn't implcitly convert to string
    // i_take_std_string(s); 

    // converting from string_view back to string
    std::string actual_string1 { s2 }; // this
    i_take_std_string(static_cast<std::string>(s2)); // or this


    // ofc you can change what the string_view is viewing
    // do note it doesn't change the original string
    std::string name {"Alex"};
    
    std::string_view name_view {name};
    print(name_view);
    name_view = "Baka";
    print(name_view);
    print(name); // name is still alex
    

    // string_view literals
    using namespace std::string_view_literals;

    print("Me is string view!"sv);

    // constexpr string view (pro)
    constexpr std::string_view cosntexpr_sv {"cosntexpr_sv"};

}

/* 5.11 Underlying Concepts */
void part2()
{
    /* 
    Conecept of owner and viewer

    ownership can be expensive, 
    as an owner it's your reponsibillity to acquire, manage, dispose object of your own.

    viewing is inexpensive, no responsibility
    but you also have no control over the objects
    */

    // String is a owner
    std::string str {"hey"};


    /* Should we just use it instead of making a copy? possibly. consider :
    
    could it be destroyed while in use?
    could it be modified while in use ?
    does the function modify the item ?  

    if all of them are no, then you have no risk using viewer mode.
    */


   // Since if the object being viewed is modified, undefined or unexpected behaviour occurss
   // a view is dependent on the object being viewed.


    // Undefined behaviour
    std::string_view sv{};
    {
        std::string s{"Hello"};
        sv = s;
    }
    // s is destroyed outside (it might be, might be not, we simply don't know)
    std::cout << sv << "\n";
    // Tip : view on the object that outlives the view


    // Modifying (undefined behaviour too)
    std::string david {"david"};
    std::string_view sv_name{david};

    sv_name = david;
    david = "DABABY";

    std::cout << sv_name << "\n"; // undefined behaviour, as object viewing is modified.

    

}

int main()
{
    // part1();
    part2();

    return 0;
}
