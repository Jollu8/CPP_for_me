#include <iostream>
using namespace std;
int doStuff()
{
    return 2 + 3;
}

int count_of_function_class = 0;
void fun()
{
    count_of_function_class++;
}
int main()
{
    fun();
    fun();
    fun();
    cout << "Function fun was called "
         << count_of_function_class << " items";
}