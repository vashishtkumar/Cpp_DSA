#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*string str, str2;
    // vacin >> str; // cant take multiple words
    // cin >> str2;
    // cin.ignore();      // not able to understood;
    getline(cin, str); // it can take multiple words
    cout << str << endl;
    str += " from lodipur ";

    // str.push_back('s');  // just single character
    str.pop_back(); // delete the last character
    str.pop_back();
    cout << "capacity : " << str.capacity() << endl;
    cout << "size :" << str.length() << endl; // it can be str.size()
    cout << str << endl;
    */

    string s;
    s = "vashisht kumar from chitkara university";
    s.push_back(7);
    cout << "capacity : " << s.capacity() << endl;
    cout << "size :" << s.length() << endl;

    // after resisizng
    s.resize(16);
    // s[16] = 'j';
    // s[17] = 'm';// wont work;
    s.shrink_to_fit(); // use to shrink the capacity after the resize();
    cout << "capacity : " << s.capacity() << endl;
    cout << "size :" << s.length() << endl;
    cout << s << endl;
    return 0;
}