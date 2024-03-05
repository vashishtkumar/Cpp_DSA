// it can be unary as well as binary . it change sthe default work of that particular operator.
/*
List of operators that cannot be overloaded
1) Scope Resolution Operator  (::)    
2) Ternary or Conditional Operator (?:)   
3) Member Access or Dot operator  (.)    
4) Pointer-to-member Operator (.*)  
5) Object size Operator (sizeof) 
6) Object type Operator(typeid) 
7) static_cast (casting operator)
8) const_cast (casting operator)
9) reinterpret_cast (casting operator)
10) dynamic_cast (casting operator)
Example 5: Overloading this .(dot) operator
*/

#include <iostream>
using namespace std;
class A{
    public:
    int a,b;

    void operator+(A &obj);
    void operator()(){
        cout <<"single "<<endl;
    }
};
void A:: operator+(A &obj){
    cout << a-obj.a;
}
int main()
{  A obj1,obj2;
   obj1.a=7;
   obj2.a=3;


   obj1+obj2;
   obj1();

return 0;
}