#include <iostream>
using namespace std;
void increament(int &v)
{
    v += 5;
}
int main()
{
    int a = 34;

    increament(a);
    int &b = a;
    cout << a << " " << b;
    return 0;
}