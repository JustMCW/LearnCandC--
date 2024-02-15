
int main()
{
    double a {12}; // no lost of data

#ifdef no_run
    int b {5.5}; // loss data, compiler gon complain
#endif
    

    return 0;
}
