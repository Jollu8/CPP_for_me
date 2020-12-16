#include "std_lib_facilities.h"

class Bad_area
{
};
// ***********************************************************
int framed_area(int x, int y)
{
    constexpr int frame_width = 2;
    if (x - frame_width <= 0 || y - frame_width <= 0)
    {
        error("it not correct (<= 0)");
    }
}
// ***********************************************************
int area(int length, int width)
{
    if (length <= 0 || width <= 0)
    {
        throw Bad_area{};
    }
    return length * width;
}
// ************************************************************
// int main()
// try
// {
//     int x = -1;
//     int y = 2;
//     int z = 4;

//     int area1 = area(x, y);
//     int area2 = framed_area(1, z);
//     int area3 = framed_area(y, z);
//     double ratio = area1 / area3;
// }
// catch (Bad_area)
// {
//     cout << "not correct value in function area()\n";
// }

// ************************************************************
int vector1()
{
    vector<int> v;
    for (int i; cin >> i;)
    {
        v.push_back(i);
    }
    for (int i = 0; i <= v.size(); ++i)
    {
        cout << "v[" << i << "] == " << v[i] << endl;
    }
}

int main()
{
    try
    {
        vector<int> v;
        for (int x; cin >> x;)
        {
            v.push_back(x);
        }
        for (int i = 0; i <= v.size(); ++i)
        {
            cout << "v[" << i << "] == " << v[i] << '\n';
        }
    }
    catch (out_of_range)
    {
        cerr << "Error range! \n";
        return 1;
    }

    catch (Bad_area)
    {
        cerr << "Error: it is not correct\n";
    }
    return 2;
}