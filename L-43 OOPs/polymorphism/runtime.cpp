// virtual keyword use 
#include <iostream>
using namespace std;

class Animal{
    public:
   virtual void speak(){
    cout <<"speaking"<<endl;
    }

};
class dog:public Animal{
public :
void speak(){
   cout <<"barking";
}
}tommy;
int main()
{

    Animal *p=&tommy;
    p->speak();
return 0;
}