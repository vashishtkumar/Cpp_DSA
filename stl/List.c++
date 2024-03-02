#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    /*
        // to intialize the list

        list<int> l1(6, 55);
        // for (int i : l1)
        //{
        //     cout << i << " ";
        // }

        // to copy the list data into another list
        list<int> l2(l1);

        for (int i : l2)
        {
            cout << i << " ";
        }

        */

    l.push_back(89);
    l.push_front(23);
    l.pop_front();
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl
         << "the size of list is " << l.size() << endl;
    // l.pop_front();

    l.push_back(45);
    l.push_back(76);
    l.push_back(4);
    l.push_front(32);

    cout << "the size of list is " << l.size() << endl;

    for (int i : l)
    {
        cout << i << " ";
    }
    l.erase(l.end()); // l.erase(l.begin()+1); not valid l.begin() is only valid as there is no index in it
    cout << endl
         << "after erase" << endl;
    // for (int i : l)
    //{
    //     cout << i << " ";
    // }

    list<int>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << *itr;
    }
    return 0;
}