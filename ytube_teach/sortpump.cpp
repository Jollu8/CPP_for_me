#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 99, 6, 34, 45, 54, 7};

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10- 1 - i; j++) {
            if (a[j] > a [j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
}