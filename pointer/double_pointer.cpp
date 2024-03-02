#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int *p = &n;
    int **p1;
    p1 = &p;

    cout << n << *p << **p1 << endl;

    // printing adress
    cout << &n << " " << &*p << " " << &**p1;
    return 0;
}