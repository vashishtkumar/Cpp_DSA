#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string ::iterator itr;

    getline(cin, str);

    /* for (itr = str.begin(); itr != str.end(); itr++)
     {
         cout << *itr << " ";
     }*/

    ///////// for reverse iterator
    /*for (string ::reverse_iterator itr = str.rbegin(); itr != str.rend(); itr++)
    {
        *itr = 'v';
        cout << *itr
             << " ";
    }*/
    cout << endl;
    /////////// for constant iterator // it cant be updated
    /*for (string ::const_iterator itr = str.cbegin(); itr != str.cend(); itr++)
    {
        cout << *itr << " " << endl;
    }*/

    //  reverse connstant iterator
    cout << endl;
    for (string::const_reverse_iterator itr = str.crbegin(); itr != str.rend(); itr++)
    {
    cout << *itr;
    }

    return 0;
}