// polymorphism means many forms .
// two types of compile time and run time.
// compile time include function overloading and operator overloading.
#include <iostream>
using namespace std;
class A{
    public:
    void func(string name){
        cout <<" i am  " <<name<<"\n";
    }

    void func(){
        cout << "i am void";
    }
};
int main()
{
    A obj;
    obj.func("vashisht");
    obj.func();
return 0;
}
