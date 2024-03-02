#include <iostream>
using namespace std;
void increament(int *p)
{
    *p += 2;
}
int main()
{
    int num = 10;
    increament(&num); // passed by pointer;
    cout << num;
    return 0;
}