#include <iostream>
using namespace std;
class Human{
    public:
    int age,height,weight;
    int getAge(){
        return this->age;
    }
    void setWeight (int w){
        this->weight=w;
    }
};

class male:public Human{
public:
 string color;
 void sleep(){
    cout<<"male sleeping";
 }
};
int main()
{

    male obj1;
     obj1.age=20;
     obj1.height=170;
     obj1.weight=65;
      obj1.color="fair";
      cout <<obj1.age<<obj1.height<<obj1.weight<<obj1.color;

      obj1.setWeight(69);

cout <<obj1.age<<obj1.height<<obj1.weight<<obj1.color;

return 0;
}