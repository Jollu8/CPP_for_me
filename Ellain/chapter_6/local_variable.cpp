#include <iostream>
using namespace std;

void changeArgument(int x)
{
    x = x + 5;
}

int divide(int numerator, int denumerator)
{
    if (0 == denumerator)
    {
        int result = 0;
        return result;
    }
    int result = numerator / denumerator;
    return result;
}

int main()
{
    int y = 4;
    changeArgument(y);
    cout << y;
}