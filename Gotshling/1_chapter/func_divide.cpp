#include <iostream>
#include <cmath>
using namespace std;

int divide(int a, int b)
{
    return a / b;
}

float divide(float a, float b)
{
    return floor(a / b);
}

int main()
{
    int x = 5, y = 2;
    float n = 5.0, m = 2.0;

    cout << divide(x, y) << endl;
    cout << divide(n, m) << endl;
    // cout << divide(x, m) << endl;  // it`s error
    return 0;
}