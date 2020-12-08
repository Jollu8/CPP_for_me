#include <iostream>
#include <fstream>
#include <ios>

using namespace std;

void with_io_excetions(ios &io)
{
    io.exceptions(ios_base::badbit | ios_base::failbit);
}

int main()
{
    ofstream outfile;
    with_io_excetions(outfile);
    outfile.open("./f.txt");

    double o1 = 5.2, o2 = 6.2;
    outfile << o1 << o2 << endl;
    outfile.close();

    ifstream infile;
    with_io_excetions(infile);
    infile.open("./f.txt");
    int i1, i2;
    char c;
    infile >> i1 >> c >> i2;
    cout << "i1 = " << i1 << ", i2 = " << i2 << '\n';
    return 0;
}