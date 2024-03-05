#include <iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout <<"function1 is executed"<<endl;
    }

    ~A(){
  cout<<"destructor of A"<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<< "function2 is excuted"<<endl;

    }

    ~B(){
        cout <<"Destructor of B"<<endl;
    }
};
class C: public A{
    public:
    void func3(){
cout <<"function3 is executed"<<endl;
    }
    ~C (){
        cout <<" Destructor of C"<<endl;
    }
}obj1;


int main()
{

obj1.func1();
obj1.func3();


B obj1;
obj1.func2();
obj1.func1();


A obj2;
obj2.func1();
return 0;
}