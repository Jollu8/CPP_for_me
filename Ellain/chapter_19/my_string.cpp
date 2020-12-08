#include <iostream>
#include <string>
using namespace std;

int main()
{
    string my_string = "abcdefghiklomnop";
    string first_ten_of_alphabet = my_string.substr(0, 11);
    cout << "The first te letters of the alphabet are "
         << first_ten_of_alphabet;
}