
// constexpr allow a function to be computed a compile time, but it can still run at runtime too.
constexpr int add(int a, int b)
{
    // note even when the parameter passed are const, they aren't in the function's scope 
    b += a;
    return b;
}

// consteval *must* evaluate at compile time
consteval int foo()
{
    return 1000;
}

int hi()
{
    return 1+1;
}

int main()
{
    constexpr int a{1};
    constexpr int b{3};

    constexpr int c = add(a,b);
    const int k = foo();

    [[maybe_unused]] int final = c+k + hi();

    return 0;
}
