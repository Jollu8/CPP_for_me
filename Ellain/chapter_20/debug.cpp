#include <iostream>
using namespace std;

int main()
{
    int factorial = 1;
    for (int i = 0; i < 10; i++)
    {
        factorial *= i;
    }
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += 1;
    }
    int factorial_withot_two = 1;
    for (int i = 0; i < 10; i++)
    {
        if (i == 2)
        {
            continue;
        }
        factorial_withot_two *= i;
    }
    int sum_withot_two = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i = 2)
        {
            continue;
        }
        sum_withot_two += i;
    }
}