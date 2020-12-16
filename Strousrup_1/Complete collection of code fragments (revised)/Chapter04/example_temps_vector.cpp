#include "std_lib_facilities.h"
#include <iostream>
using namespace std;

int main()
{
    vector<double> temps;
    for (double temp; cin >> temp;)
    {
        temps.push_back(temp);
    }

    double sum = 0;
    for (int x : temps)
    {
        sum += x;
    }
    cout << "Midle temps: " << sum / temps.size() << '\n';

    sort(temps.begin(), temps.end());
    cout << "Median of temps: " << temps[temps.size() / 2] << '\n';
}