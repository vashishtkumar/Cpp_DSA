// like queue but can delete front front add at front , delete from back and delete from back.
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(12);  // push element at end
    d.push_front(30); // push element at front
    d.pop_back();     // pop from back
    d.pop_front();    // pop from front
    d.push_front(56);
    d.push_front(23);
    d.push_back(48);
    d.push_back(78);
    d.push_front(200);
    d.push_front(389);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << "this size of deque " << d.size() << endl;
    cout << "emoty or not " << d.empty() << endl;
    // erase
    cout << " after erase " << endl;
    // d.erase(d.begin());                    // just delet one element;
    d.erase(d.begin() + 1, d.begin() + 4); // to delete some specific like from 2 index to 3
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl
         << "element at 2 index is " << d[2] << endl;

    cout << " element at 1 index is " << d.at(1) << endl;

    cout << "front elelment " << d.front() << endl;
    cout << "back element " << d.back() << endl;

    return 0;
}