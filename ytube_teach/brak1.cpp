#include <iostream>
using namespace std;

int main()
{
    cout << "begin iter" << endl;
    for (int i = 0; i < 10;)
    {
        cout << "name i = " << i << endl;
        if (i == 5)
        {
            break;
        }
        i++;
    }
}