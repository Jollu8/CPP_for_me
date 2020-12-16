#include "std_lib_facilities.h"

int main()

{
    vector<int> v = {5, 7, 9, 4, 6, 8};
    //     for (int i = 0; i < v.size(); ++i)
    //     {
    //         cout << v[i] << '\t';
    //     }

    for (int x : v)
        cout << x << '\n';
}