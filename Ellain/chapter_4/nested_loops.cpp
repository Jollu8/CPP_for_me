#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << '\t' << i;
    }
    cout << 'n';
    for (int i = 0; i < 10; ++i)
    {
        cout << i;
        for (int j = 0; j < 10; ++j)
        {
            cout << '\t' << i * j;
        }
        cout << '\n';
    }

    int j = 5;
    for (int i = 0; i < 10 && j > 0; i++)
    {
        cout << i * j;
        j = i - j;
    }
}