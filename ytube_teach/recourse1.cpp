#include <iostream>;
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "for" << endl;

    int n;
    cin >> n;

    if (n == 0)
    {
        cout << "1"
             << "0";
    }
    else if(n > 0)
        {
            /* code */

            for (int i = 1; i <= n; i++)

                cout << i << " ";
        }
}
