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

int main()
{

    // float v[] = {1.0, 2.0, 3.0}, w[] = {7.0, 8.0, 9.0};

    // float x[3];
    // for (int i = 0; i < 3; ++i)
    // {
    //     x[i] = v[i] - w[i];
    //     cout << x[i] << '\n';
    // }

    // double x[] = {
    //     2,
    //     3,
    //     4,
    // },
    //        y[] = {4, 2, 0}, sum[3];
    // vector_add(3, x, y, sum);
    // vector_add(sizeof x / sizeof x[0], x, y, sum);

    ifstream ifs("some_array.dat");
    int size;

    ifs >> size;
    float *v = new float[size];
    for (int i = 0; i < size; ++i)
    {
        ifs >> v[i];
        cout << v[i] << endl;
    }
    delete[] v;

    return 0;
}