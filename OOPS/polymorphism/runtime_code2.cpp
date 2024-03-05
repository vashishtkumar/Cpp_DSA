#include <iostream>
using namespace std;


class Santa{
public:
virtual void m1(){
    m3();
    cout <<"Santa m1  ";
}
virtual void m3(){
    cout <<"Santa m3  ";
}
};

class Frosty :public Santa{
    public :
    virtual void m1(){
        cout <<"Frosty m1  ";
    }
    virtual void m3(){
        cout <<"Frosty m3  ";
    }
};

class Grinch : public Frosty{
public:
virtual void m2(){
    cout << "Grinch m2  ";
    m1();
}
virtual void m3(){
    cout<<"Grinch m3  ";
    Frosty::m3();
}
virtual void m4(){
    cout <<"Grinch m4  ";
    m3();
}
};

class Rudolph : public Santa{
    public :
    virtual void m2(){
        cout <<"Rudolph m2  ";
        m1();
    }
    virtual void m3(){
        cout <<"Rudolph m3  ";
        Santa::m3();
    }
};
int main()
{
Santa*  var1 = new Frosty();
Frosty* var2 = new Grinch();
Santa*  var3 = new Grinch();
Santa*  var4 = new Rudolph();
    //var2->m3();
    var4->m1();
    
return 0;
}