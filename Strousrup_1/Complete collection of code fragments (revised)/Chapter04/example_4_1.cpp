#include "std_lib_facilities.h"

int main()
{
    int first = 0;
    int second = 0;

    while (cin >> first >> second)
    {
        while (second || first == '|')
        {
            break; /* code */
        }

        if (first <= second)
        {
            cout << first << '\t' << second << endl;
            ++first;
        }
    }
}