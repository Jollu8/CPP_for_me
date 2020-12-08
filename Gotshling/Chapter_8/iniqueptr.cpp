#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<double> dp(new double);
    *dp = 7;
    double d;
    unique_ptr<double> dd{&d};
    
}