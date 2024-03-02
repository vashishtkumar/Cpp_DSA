#include <iostream>
#include <string>
using namespace std;
int main()
{
    char *str = "4567";
    int num = atoi(str);
    cout << num;
    return 0;
}

/*

 // Difference between atoi and stoi

 stoi works on both c -style string(character of array and string literal ) as well as c++(11) string || can took three parameter firsr string second starting index and third the base input number
 ||  int stoi(const string &str,size_t* index=0,int base=10);
 atoi works only on c -style string(character of array and string literal) ||ntook only one parameter returns the integer value; || int atoi(const char *str);











*/