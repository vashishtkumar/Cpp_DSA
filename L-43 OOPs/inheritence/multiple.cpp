#include <iostream>
using namespace std;

class animal{
public:
int weight,age;
void bark(){
    cout <<"barking" <<endl;
}
};
class human{
public:
string color;
void speak(){
    cout << "speaking" << endl;
}


};
// multiple inheritence;
class hybrid:public animal,public human{

};
int main()
{
    hybrid obj1;
    obj1.speak();
    obj1.bark();
return 0;
}