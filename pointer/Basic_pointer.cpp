#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    char j = 'a';
    char *p = &j;
    // cout << (void *)p;
    cout << p << endl;
    cout << sizeof(p) << " ptr size : " << sizeof(ptr) << "\n";

    return 0;
}

/*
  for data types memory link(https://www.geeksforgeeks.org/data-types-in-c/);
# symbol table contain name of variable and address
# size of pointer of 32 bit architecture is 4 byte;
# size of pointer of 64 bit architecture is 8 bytes;

*/