#include <iostream>
using namespace std;
class A{
    public:
    int a,b,c;
    void show(){
       cout <<a<<b<<c<<endl; 
    }
};
int main()
{
    A obj1;
    obj1.a=10;
     obj1.b=20;
    obj1.c=30;
    obj1.show();
 A obj2=obj1;
 obj2.show();
 obj2.b=89;
 obj2.show();
 obj1.show();



return 0;
}