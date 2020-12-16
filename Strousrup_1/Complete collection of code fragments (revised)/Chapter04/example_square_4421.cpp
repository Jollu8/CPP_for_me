#include "std_lib_facilities.h"

int main()
{
    int i = 0;
    while (i < 10)
    {
        cout << i << '\t' << i * i << '\n'; // or sqare(i)
        ++i;
    }
}