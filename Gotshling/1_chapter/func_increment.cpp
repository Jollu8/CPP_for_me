#include <iostream>
using namespace std;

void increment(int &x)
{
    x++;
    return;
}

int main()
{
    int i = 4;
    increment(i);
    int p;
    p = i;
    cout << "i = " << p << '\n';
    return 0;
}