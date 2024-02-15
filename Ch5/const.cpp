int main()
{

    const int _{3+7}; // gets optimzed to 10
    constexpr int _a{1+30};// force compile constant


    //Re: consnt vs constexpr
    //- both are always constant at runtime
    //- constexpr is always constant at compile time
    //- however not all types are compatible with constexpr ( strings or type that requires dynamic memory allocation )
    
}
