#include "std_lib_facilities.h"

int main()
{
    string previous = " ";
    string current;
    while (cin >> current)
    {
        if (previous == current)
        {
            cout << "again word: " << current << '\n';
        }
        previous = current;
    }
    return 0;
}