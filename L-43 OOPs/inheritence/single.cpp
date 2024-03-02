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

};
int main()
{
    dog d;
    d.speak();
return 0;
}