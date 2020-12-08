#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile("some_missing_file.xyz");
    int i;
    double d;
    infile >> i >> d;
    cout << "i = " << i << ", d  " << d << endl;
    infile.close();
    return 0;
}