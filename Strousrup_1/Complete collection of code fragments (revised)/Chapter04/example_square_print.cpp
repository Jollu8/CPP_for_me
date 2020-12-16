#include "std_lib_facilities.h"

void print_square(int v)
{
    cout << v << '\t' << v * v << '\n';
}

int main()
{
    for (int i = 0; i < 50; ++i)

        print_square(i);
}