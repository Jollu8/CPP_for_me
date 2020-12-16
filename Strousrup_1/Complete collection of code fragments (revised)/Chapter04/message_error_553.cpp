#include "std_lib_facilities.h"

char ask_user(string question)
{
    cout << question << " ? (enter y or n) \n";
    string answer = " ";
    cin >> answer;

    if (answer == "y" || answer == "yes")
        return 'y';
    if (answer == "n" || answer == "no")
        return 'n';
    return 'b';
}

int area(int lendth, int width)
{
    if (lendth <= 0 || width <= 0)
    {
        return -1;
    }
    return lendth * width;
}