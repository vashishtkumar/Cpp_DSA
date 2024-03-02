#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int > v={10,20,30,40,50};
        //  vector<int>::iterator it;

v.erase(v.begin());
for(int i:v){
    cout <<i  << "reverse"<<endl;
}
//cout<<"  is  "<<v[0];
//for(it=v.begin() ;it!=v.end();it++){
  //  cout<< *it << endl <<&*it<<endl;
//}

for (std::vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
   std::cout << *it << " ";
}
cout<<endl;

/*for (std::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it) {
    std::cout << *it << " "<<" address "<< &*it ;
}*/

     return 0;
}