#include <iostream>
using namespace std;
int main()
{

    // to allocate memory in heap for any variable;

    int *p = new int;
    *p = 78;
    cout << *p << endl;

    float *fl = new float(78);
    cout << *fl << " the address of that pointer is  " << &fl << "\n";

    // lets create dynamic array
    cout << "ENTER THE SIZE OF ARRAY" << endl;
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    delete p;
    delete fl;
    delete[] arr;
    return 0;
}