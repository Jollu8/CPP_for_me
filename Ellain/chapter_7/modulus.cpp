#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randRange(int low, int high)
{
    return rand() % (high - low + 1) + low;
}

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 1000; ++i)
    {
        cout << randRange(4, 10) << '\n';
    }
}