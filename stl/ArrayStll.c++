#include <iostream>
#include <array>
using namespace std;
int main()
{

   array<int, 4> a = {1, 2, 3};
   cout << " Element at second index " << a.at(2) << endl;
   cout << "empty or not " << a.empty() << endl;
   cout << "first element " << a.front() << endl;
   cout << "last element " << a.back() << "\n";
   cout << "array size :" << a.size() << " ,sizeof =" << sizeof(a) / sizeof(a[0]) << endl;
   return 0;
}