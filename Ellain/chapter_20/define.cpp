#include <iostream>
#define DEBUG
using namespace std;
int main()
{
    int y;
    int x;
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter calue for y: ";
    cin >> y;
    x *= y;
#ifdef DEBUG
    cout << "Variable x: " << x << '\n'
         << "Variable y: " << y;
#endif
    return 0;
}