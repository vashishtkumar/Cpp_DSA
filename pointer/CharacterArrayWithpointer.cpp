#include <iostream>
using namespace std;
int main()
{
    char arr[5] = "1234"; // last reserved for null character "\0"
    // int b = arr[4];
    void *p = arr;
    cout << arr << endl; // print till null as their implemention is like that
    cout << p << endl;

    // to print the address we will type cast it
    cout << (void *)arr << endl; // it does not tell compiler which type data is
    cout << static_cast<void *>(arr) << endl;
    return 0;
}