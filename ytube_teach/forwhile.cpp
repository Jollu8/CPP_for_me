#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i <= 10; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    int j = 5;
    while (j < 50)
    {
        /* code */
        cout << j << " ";
        j += 100 - 97;
    }

    cout << endl;
    int w = 10;
    do {
        cout << w << " ";
        w = w + 10;
        
        
        
    }while ( w >= 1000);

}