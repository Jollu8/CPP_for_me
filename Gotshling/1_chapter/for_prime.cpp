#include <iostream>
using namespace std;

int main()
{
    int primes[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i : primes)
    {
        if (i == 3)
        {
            continue;
        }
        if (i > 7)
        {
            break;
        }
        cout << i << " ";
    }
    return 0;
}