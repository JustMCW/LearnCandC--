// this is MACROS !!!!!!111.
// everything is done in preprocessing stage (right before compiling)
// includes stuff like comment removing 

#include <iostream> // preprocessor moves all of iostream content to this file
#define identifier substitution_text // replacing texts, literally ( quite useless so dont use )

// Replacing the identifier with nothing (but it has other purporses)
#define process_ // object-like macros without subitution text, this can be useful for [Conditional compilation]

int main()
{
    // This checks if the process identifier has been defined
#ifdef process
    std::cout << "Process is defined! \n";
#else
    std::cout << "Process is not defined! \n";
#endif
    std::cout << "Normal stuff\n";
// the difference of this and a constant boolean :
// that part of code wont even get compiled, saving space !

// also you can do 
#if 0
    std::cout << "Same as commented out!"
    // BUT YOU CAN HAVE ACTUAL COMMENTS IN IT !!!!!
#endif

    return 0;
}


/*
[ANOTHER KEY POINT]

Object-like macros don’t affect other preprocessor directives

#define a
#ifdef a
...

a is not replaced with nothing here !

[ANOTHER KEY POINT]

Preprocessor doesnt understand no scope !
Defininig it inside a 'function' still have it applied to the global scope !

Hell, preprocessor doesnt understand no C or C++ !

[ANOTHER KEY POINT]

macros only apply to 1 and only 1 file at a time
#include <iostream> in one file doesnt make it include in all files !

the same for defining
#define Hey // in file 1
ifdef Hey // in file 2 always not defined ! (false)


*/
