#include "std_lib_facilities.h"

int main()
{
    int first_number = 0;
    int second_number = 0;
    double result = 0;
    char unit = 0;

    cout << "Enter two number and choose ariphmethic icon: \n";
    while (cin >> first_number >> second_number >> unit)
    {
        if (unit == '+')
        {
            cout << first_number + " + " + second_number
                 << " = " << first_number + second_number << '\n';
        }
        else if (unit == '-')
        {
            result = first_number - second_number;
            cout << first_number + " - " + second_number
                 << " = " << result << '\n';
        }
        else if (unit == '*')
        {
            cout << first_number + " * " + second_number
                 << " = " << first_number * second_number << '\n';
        }
        else if (unit == '/')
        {
            result = first_number / second_number;
            cout << first_number + " - " + second_number
                 << " = " << result << '\n';
        }
        else if (unit == 'z')
        {
            break;
        }
        else
        {
            cout << "It is not number!";
        }
    }
}