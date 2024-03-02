#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "vashisht is learing inbuilt function to reverse string ";
    reverse(str.begin(), str.end());

    cout << str << endl;

    // use of reverse iterators
    string str1 = "i love doing coding by ownself";

    string rev = string(str1.rbegin(), str1.rend());

    cout << rev << endl;
    return 0;
}