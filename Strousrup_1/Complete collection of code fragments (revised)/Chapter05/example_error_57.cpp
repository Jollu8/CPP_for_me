#include "std_lib_facilities.h"

// int main()
// {
//     vector<double> temps;
//     for (double temp; cin >> temp;)
//     {
//         temps.push_back(temp);
//     }
//     double sum = 0;
//     double high_temp = 0;
//     double low_temp = 0;

//     for (int x : temps)
//     {
//         if (x > high_temp)
//         {
//             high_temp = x;
//         }
//         if (x < low_temp)
//         {
//             low_temp = x;
//         }
//         sum += x;
// //     }

// //     cout << "Max temp: " << high_temp << '\n';
// //     cout << "Min temp: " << low_temp << '\n';
// //     cout << "Midle temp: " << sum / temps.size() << '\n';
// // }

// // *************************************************************************

// int main()
// {
//     vector<double> temps;
//     double sum = 0;
//     double high_temp = -1000;
//     double low_temp = 1000;
//     int no_of_temps = 0;

//     for (double temp; cin >> temp;)
//     {
//         ++no_of_temps;
//         sum += temp;
//         if (temp > high_temp)
//         {
//             high_temp = temp;
//         }
//         if (temp < low_temp)
//         {
//             low_temp = temp;
//         }
//     }
//     cout << "Max temp: " << high_temp << '\n';
//     cout << "Min temp: " << low_temp << '\n';
//     cout << "Midle temp: " << sum / no_of_temps << '\n';
// }

// **********************************************************************

#include "std_lib_facilities.h"

int main()
{
    try
    {
        string res = "seven"; vector<int> v(10); int res = v[5];
        cout << "Success\n";

        

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}