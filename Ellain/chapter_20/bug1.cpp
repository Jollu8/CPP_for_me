#include <iostream>
using namespace std;

double computeIntegerest(double base_val, double rate, int years)
{
    double final_multiplier = 1;
    for (int i = 0; i < years; i++)
    {
        final_multiplier *= (1 + rate);
    }
    return base_val * final_multiplier;
}

int main()
{
    double base_val;
    double rate;
    int years;
    cout << "Enter a base value: ";
    cin >> base_val;
    cout << "Enter n integerst rate: ";
    cin >> rate;
    cout << "Enter the number of years to compound: ";
    cin >> years;
    cout << "After " << years << " you will have "
         << computeIntegerest(base_val, rate, years)
         << " money" << endl;
}