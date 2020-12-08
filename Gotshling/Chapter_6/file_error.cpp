#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream infile;
    string filename{"some_missing_file.xyz"};
    bool opened = false;
    while (!opened)
    {
        infile.open(filename);
        if (infile.good())
        {
            opened = true;
        }
        else
        {
            cout << "File " << filename
                 << "does not found! Try another a new name, please: ";
            cin >> filename;
        }
    }
    int i;
    double d;
    infile >> i >> d;
    if (infile.good())
    {
        cout << "i = " << i << ", d = " << d << endl;
    }
    else
    {
        cout << "Error read in this file.";
    }
    infile.close();

    return 0;
}