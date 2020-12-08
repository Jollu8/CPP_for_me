#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>

using namespace std;

void write_someting(ostream &os)
{
    os << "Do you know, what 3 * 3 = " << 3 * 3 << endl;
}

int main(int argc, char *argv[])
{
    ofstream myfile("example.txt");
    stringstream mysstrem;
    write_someting(cout);
    write_someting(myfile);
    write_someting(mysstrem);
    cout << "mysstream = " << mysstrem.str();
    double pi;
    pi = M_PI;
    std::cout.setf(ios_base::showpos);
    cout << "pi = " << scientific << pi << endl;
    cout << oct << 63 << endl;
    cout << hex << 63 << endl;
    cout << dec << 63 << endl;
    cout << (pi < 3) << endl;
    cout << boolalpha << (pi < 3) << endl;

    // << "pi = " << setfill('-') << left << setw(30) << pi << endl;

    return 0;
}