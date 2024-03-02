#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "vashisht";
    m[2] = "loves";
    m[13] = "coding";
    m[5] = "code help";

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "to find if there key exists or not : " << m.count(9) << endl;

    auto it = m.begin();
    it++;
    m.erase(it);

    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    auto itrp = m.find(1);

    cout << " the key is : " << (*itrp).first << " key value is :" << (*itrp).second << " address" << &*itrp;
    return 0;
}

/*
exists as key and value pair
key must be unique value can be different
inser,erase,count all have o(n) time complexity; because of red tree
unorder tree has time complexity in searching is o(1)
*/