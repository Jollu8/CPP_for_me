#include "std_lib_facilities.h"

int main()
{
    cout << "Please, enter vlaue with float: ";
    double n;
    cin >> n;
    cout << "n == " << n
         << "\nn + 1 == " << n + 1
         << "\nthree times n == " << 3 * n
         << "\n two times n == " << n + n
         << "\nn in square == " << n * n
         << "\nhalf past n == " << n / 2
         << "\nroot square in n == " << sqrt(n)
         << '\n';
}