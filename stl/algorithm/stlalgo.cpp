#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    v.push_back(67);
    v.push_back(23);
    v.push_back(12);
    v.push_back(37);

    cout << "FINDING 23 " << binary_search(v.begin(), v.end(), 67) << endl; // returns true or false
    cout << "lower bound" << lower_bound(v.begin(), v.end(), 67) - v.begin() << endl;
    cout << "upper bound" << upper_bound(v.begin(), v.end(), 67) - v.begin() << endl;

    int a = 90;
    int b = 100;

    cout << " max of a and b is " << max(a, b) << endl;
    cout << "min of a and b is  " << min(a, b) << endl;

    swap(a, b);
    string s = "vashisht loves";
    reverse(s.begin(), s.end());
    cout << s << endl;

    cout << "vector before rotate " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n"
         << "vector after rotate " << endl;

    rotate(v.begin(), v.begin() + 2, v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n"
         << "after sorting " << endl;
    sort(v.begin(), v.end()); // baxsed on intro sort combination of three algorithm quick,heapand merge
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}