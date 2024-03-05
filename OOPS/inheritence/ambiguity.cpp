#include <iostream>
using namespace std;

class A{
public:
void func();
};
void A :: func(){
    cout<<"I belonmgs to A"<<endl;
}
class B{
    public:
    void func();

};

void B::func(){
    cout <<"I belongs to B"<<endl;
}
class C:public A,public B{

};
int main()
{

    C obj;
    obj.B::func();
return 0;
}


// friend function does not belong to class biut it can access the private member;