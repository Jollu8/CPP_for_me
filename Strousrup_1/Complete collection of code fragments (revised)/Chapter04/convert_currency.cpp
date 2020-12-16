// I don't know, but I wrote this program so easily.
// I decided to comment a little. hahaha.

#include "std_lib_facilities.h"

int main()
{
    constexpr double dollar = 89.00;
    constexpr double euro = 95.00;
    constexpr double phount = 112.00;
    double rouble = 0;
    char unit = 0;
    cout << "Enter convert currency: \n";
    if (cin >> rouble >> unit)
    {
        switch (unit)
        {
        case 'D':
            cout << "rouble " << rouble << " Equal to " << rouble / dollar
                 << " dollars\n";
            break;
        case 'E':
            cout << "rouble " << rouble << " Equal to " << rouble / euro
                 << " euroes\n";
            break;
        case 'P':
            cout << "rouble " << rouble << " Equal to " << rouble / phount
                 << " phountes\n";
            break;

        default:
            cout << "It is not correct!";
            break;
        }
    }
}