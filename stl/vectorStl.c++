#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    // vector <int> a(5,1);  // it means that size of vector is 5 with value intilize with 1
    // vector <int> last(a);//copied the vector a in last;
    cout <<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.push_back(7);
    cout <<"capacity " <<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.push_back(8);
    cout <<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.push_back(89);
    cout <<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.pop_back();
    //v.clear();
    //cout <<"After clear"<<endl;
    //cout <<"capacity "<<v.capacity()<<endl;
    //cout<<"size "<<v.size()<<endl;

    
    //cout <<"Element at"<<v.at(3)<<endl;

    //cout <<"front "<<v.front()<<endl;
    //cout <<"back "<<v.back()<<endl;
   // cout <<" at "<<v.at(0);






/*cout <<endl<<endl<<endl<<"Another one bhai"<<endl;

   vector <int> a(5,1);
for (int i:a){
    cout <<i;
}
*/
return 0;
}