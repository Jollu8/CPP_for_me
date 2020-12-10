#include "std_lib_facilities.h"

int main()
{
    int number_of_words = 0;
    string previous = " ";
    string current;
    while (cin >> current)
    {
        ++number_of_words;
        if (previous == current)
        {
            cout << "Repaeted word " << current
                 << " after " << number_of_words
                 << " word. " << '\n';
        }
        previous = current;
    }
}