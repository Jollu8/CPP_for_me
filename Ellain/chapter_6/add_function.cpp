#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int addTen(int x)
{
    int result = x + 10;
    return result;
}
int main()
{
    int result2 = add(1, 2);
    cout << "The reult is: " << result2 << '\n';
    cout << "Adding 3 and 4 gives us: " << add(3, 4) << endl;
    int result1 = addTen(10);
    cout << result1;
}