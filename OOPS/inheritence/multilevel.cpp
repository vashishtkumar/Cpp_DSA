#include <iostream>
using namespace std;

class animal{
public:
int weight,age;
void speak(){
    cout <<"speaking";
}
};
class dog:public animal{
public:
string color;
};
class german:public dog{

};
int main()
{
    german d;
    d.speak();
return 0;
}