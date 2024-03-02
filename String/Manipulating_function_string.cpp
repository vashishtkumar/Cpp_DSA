#include <iostream>
// #include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "vashisht loves coding ";
    string str2 = "vashisht want to be software developer";

    char arr[90];
    // string str;

    // copy of string
    str1.copy(arr, 8, 2); // target length index

    cout << " the copied string in arr is upto 8 length = " << arr << endl;

    // swaping of string

    cout << "before swapping " << endl;
    cout << "str1 is : " << str1 << endl
         << "str2 is : " << str2 << endl;
    str2.swap(str1);

    cout << "After swapping" << endl;
    cout << "str1 is : " << str1 << endl
         << "str2 is : " << str2 << endl;

    return 0;
}