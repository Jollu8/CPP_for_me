#include <iostream>
using namespace std;
int *growArray(int *p_values, int *size);
void printArray(int *p_values, int size, int element_set);
int main()
{
    int next_element = 0;
    int size = 10;
    int *p_values = new int[size];
    int val;
    cout << "Please enter a number: ";
    cin >> val;
    while (val > 0)
    {
        if (size == next_element + 1)
        {
            p_values = growArray(p_values, &size);
        }
        p_values[next_element] = val;
        next_element++;
        cout << "Current array values are: " << endl;
        printArray(p_values, size, next_element);
        cout << "Please enter a number (or 0 to exit: ";
        cin >> val;
    }
    delete[] p_values;
}

void printArray(int *p_values, int size, int elements_set)
{
    cout << "The totalsize of the array is: " << size << endl;
    cout << "Number of slots set so far: " << elements_set << endl;
    cout << "Vlues in the earray: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "p_valuse[" << i << "] = " << p_values[i] << endl;
    }
}

int *growArray(int *p_values, int *size)
{
    *size *= 2;
    int *p_new_values = new int[*size];
    for (int i = 0; i < *size; ++i)
    {
        p_new_values[i] = p_values[i];
    }
    delete[] p_values;
    return p_new_values;
}