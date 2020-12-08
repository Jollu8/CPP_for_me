#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    if (x < 0.0)
    {
        int absx = -x;
        cout << "|x| = " << absx << "\n";
    }
    else
    {
        int absx = x;

        cout << "|x| = " << absx << "\n";
    }
    return 0;
}