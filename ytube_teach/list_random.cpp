#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int const SIZE = 10;
    int arr[SIZE];
    bool already_there;

    for (int i = 0; i < SIZE;)
    {
        already_there = false;

        int new_rand_value = rand() % 20;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == new_rand_value)
            {
                already_there = true;
                break;
            }
        }
        if (!already_there)
        {
            arr[i] = new_rand_value;
            i++;
        }
    }
    for (int i = 0; i < SIZE; i++)

    {
        cout << arr[i] << endl;
    }
}