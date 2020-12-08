#include <iostream>
#include <numbers>
#include <cmath>
using namespace std;

int main()
{
    // const double fish_factor{2.0 / 0.5};
    // const double inches_per_foot{12.0};

    // double fish_count{};
    // double fish_length{};
    // cout << "Enter the number of fish you want to keep: ";
    // cin >> fish_count;
    // cout << "Enter the average fish length in inches: ";
    // cin >> fish_length;
    // fish_length /= inches_per_foot;
    // cout << '\n';
    // const double pond_area{fish_count * fish_length * fish_factor};
    // const double pond_diameter{2.0 * sqrt(pond_area / std::numbers::pi)};
    // cout << "Pond diameter required for " << fish_count << " fish is "
    //      << pond_diameter << " feet.\n";
    // **************************************************

    double a{1.5}, b{}, c{};
    double result{a / b};
    cout << a << "/" << b << " = " << result << endl;

    return 0;
}
