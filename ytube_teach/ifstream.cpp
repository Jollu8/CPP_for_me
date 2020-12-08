#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // int a = 200;
    // ofstream fout;
    // fout.open("./file.txt");
    // fout << a;

    ifstream fin;
    int b;
    fin.open("./file.txt");
    fin >> b;
    cout << b;

    // int a;
    // cin >> a;
    // cout << a;
}