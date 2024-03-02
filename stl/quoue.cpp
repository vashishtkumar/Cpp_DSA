#include <iostream>
#include <queue>
using namespace std;
int main(){
queue <string> q;
q.push("vashisht");
q.push("learning");
q.push("c++");


cout <<" element first "<< q.front();
cout<<" size "<<q.size();
cout <<"is empty or not "<<q.empty();
q.pop();

cout <<"element after pop "<<q.front();
cout <<"is empty or not "<<q.empty();
cout<<" size "<<q.size();
return 0;
}