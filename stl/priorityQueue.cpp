#include <iostream>
// #include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{ ////// for maximum
    priority_queue<int> maxi;
    maxi.push(6);
    maxi.push(7);
    maxi.push(0);
    maxi.push(199);
    int size = maxi.size();
    for (int i = 0; i < size; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    ///// for minimum
    cout << endl
         << " for minimum " << endl;
    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(23);
    mini.push(78);
    mini.push(4);
    mini.push(13);
    size = mini.size();
    for (int i = 0; i < size; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    cout << endl
         << " mini is empty :" << mini.empty();
    return 0;
}

/* priority_queue<int> maxi;
it will print the maximum element then other like in decreasing order
*/