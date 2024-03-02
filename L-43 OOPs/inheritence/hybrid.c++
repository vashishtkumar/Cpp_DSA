#include <iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout <<"function 1"<<endl;
    }

};

class B:public A{
    public :
    void func2(){
        cout <<" function 2 "<<endl; 
    }

};

class C:public A{

    public :
    void func3(){
        cout <<"function 3 "<<endl;
    }
};

class D:public C,public B{
    public:
void func4(){
    cout <<"function 4"<<endl;
}
};


int main()
{

    D dobj;
    dobj.func4();
    //dobj.func1(); // ambiguity problem arises; to solve use dobj.A::func1();
    dobj.func2();

    C cobj;
    cobj.func1();
    cobj.func3();

return 0;
}