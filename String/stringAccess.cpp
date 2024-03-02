// string accessing and their size in different cases

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "vashisht";
    char a[9] = "vash";
    int i = 0;
    /* while (str[i] != '\0')
         i++;

     cout << i;*/

    /* while (a[i] != '\0')
    {
        i++;
    }
    cout << i << " ,size with size of : " << sizeof(a) << endl;

    */

    char *ch = "vashisht_kumar";
    while (ch[i] != '\0')
    {
               i++;
    }
    cout << i << " ,size with size of : " << sizeof(ch);
    return 0;
}