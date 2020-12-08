#include <iostream>
#include <fstream>

using namespace std;

void vector_add(unsigned size, const double v1[], const double v2[], double s[])
{
    for (unsigned i = 0; i < size; ++i)
    {
        s[i] = v1[i] + v2[i];
    }
}

int main(int args, char *argv[])
{
    double *x = new double[3],
           *y = new double[3],
           *sum = new double[3];

    for (unsigned i = 0; i < 3; ++i)
    {
        x[i] = i + 2, y[i] = 4 - 2 * i;
    }
    vector_add(3, x, y, sum);
    int *ip = new int;
    delete ip;
    return 0;
}
