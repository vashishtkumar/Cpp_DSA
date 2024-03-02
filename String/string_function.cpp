#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string str = "vashisht learning string";
    string cmpr = "vashisht learning string";
    cout << "the size of string is =" << str.length() << endl; // or str.size();

    cout << "accessing the string =" << str[0] << endl;
    cout << "accessing the string at any i th index =" << str.at(3) << endl;
    ///// concatinating the string

    string str2 = "vashisht learning string by own ";
    string str3;
    // str3 = str + str2; // + operator
    str3.append(str); // can also used for conacatination
    cout << str3 << endl;

    ///// string comparison
    bool p = str == cmpr;
    cout << p << endl;
    int check = str.compare(str2);
    /*
    compare function return 0 is it is equal
    if str > str2 it will give positive value which  is difference between itd lenght;
    if str < str2  it will give negative value which is difference between its length;

     we can also compare the substring

     str.compare(position,length,str2)// position ,length and from the string

    */
    cout << check << endl;

    ////  find ..... to find is there string contain thst string that is substr
    string strfind = "vashisht loves programming";
    check = strfind.find("lovp"); // return the index position if availabe other wise it will give -1;
    cout << check << endl;

    /////// substr()   Generate the Substring

    string substr = "vashisht doing coding in vs code";
    string substr1 = substr.substr(3, 8); // statrting and length of substring retruns the string if out of range we want it will show out of range
    cout << substr1 << endl;

    /////// Modify strings
    cout << "               MODIFYING STRING       " << endl;
    string modify = "I Love coding";
    modify.replace(2, 4, "liking"); // position , length and string that you want to put; 2,1 is taht you want to delete from that then replace with other string
    cout << modify << " size : " << modify.size() << endl;

    modify.insert(2, "am ");
    cout << modify << " size : " << modify.size() << endl;

    modify.erase(2, 2); // starting index with the length to be deleted
    cout << modify << " size : " << modify.size() << endl;

    ///////  Conversion string to array of charater
    string strcon = "c++";
    char const *char_arr = strcon.c_str();
    cout << "the size of strcon : " << sizeof(strcon) << " ,string class size :" << strcon.size() << endl;
    cout << char_arr[2] << " " << sizeof(char_arr) << endl;

    return 0;
}