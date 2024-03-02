#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Rectangle{
int l;
int b;
int* h;
public:
Rectangle(){
    h = new int;
}
void Setvalues(int l,int b,int h){
    this -> l=l;
    this -> b=b;
    * this->h=h;
}

Rectangle (Rectangle &temp){
    this -> l=temp.l;
    this -> b=temp.b;
    h=new int;
    *h=*(temp.h);
}

void show(){
    cout <<" l=" <<l<<" b="<< b <<" h="<<*h  << endl;
}
~Rectangle(){
    delete h;
}


};

int main()
{ Rectangle B1;
B1.Setvalues(1,2,3);
B1.show();
Rectangle B2(B1);

B2.show();
B1.Setvalues(4,5,6);
B1.show();
B2.show();
return 0;
}

/*#include <iostream>
using namespace std;
class box {
    private:
    int length;
    int * breadth;
    int height;
    public:
    box() {
            breadth = new int;
    }
    void set_values(int a, int b,
        int c) {
        length = a;
        * breadth = b;
        height = c;
    }
    void show_data() {
        cout << "Length = " << length << endl <<
            "Breadth = " << *breadth << endl <<
            "Height = " << height <<
            endl;
    }
    //Parameterized Constructors for 
    //for implementing deep copy 
    box(box & sample) {
            length = sample.length;
            breadth = new int;
            * breadth = * (sample.breadth);
            height = sample.height;
        }
        ~box() {
            delete breadth;
        }
};
int main() {
    box B1;
    // Set the dimensions of box B1
    B1.set_values(5, 10, 15);
    B1.show_data();
    // When the data will be copied, then all the resources will also get 
     //allocated to the new object 
    box B2 = B1;
    // Display the dimensions 
    B2.show_data();
    B1.set_values(4,5,6);
    B1.show_data();
    B2.show_data();
    return 0;
}
*/

