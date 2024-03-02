#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(23);
    s.insert(87);
    s.insert(4);
    s.insert(24);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl
         << "after erase"
         << "\n";

    s.erase(s.begin());

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    cout << "if the specified element exists or not " << s.count(6) << "\n";
    set<int>::iterator it = s.find(24);
    cout << " element find " << *it << " adress" << &*it << endl;
}

/*
# set prints the in sorted order with frequency is just one time
 insert,find ,count,erase time complexity is O(logn);
*/