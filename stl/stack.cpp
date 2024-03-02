//last in first out (LIFO);
#include <iostream>
#include <stack>
using namespace std;
int main()
{
stack <string> s;
s.push("vashisht");
s.push("love");
s.push("coding");
cout <<"top element is "<< s.top();
cout <<" size "<<s.size();
s.pop();
cout<<s.top();
cout <<"empty or not "<<s.empty();
return 0;
}