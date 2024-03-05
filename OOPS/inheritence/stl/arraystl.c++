/*
array <object_type,array_size>array_name

example
array<int,10> array1={1,2,3,4,5,6,7,8};


at();
front();
fill();
empty();
size();
max_size();
begin();
end();
*/



#include <iostream>
#include <array>
using namespace std;
int main()
{

    array<int,10> arr={1,2,3,4,5,6,7,8};


//cout << arr.at(10);// out of bound;
//cout <<arr.front();
//arr.fill(5);
//cout <<arr[3];
//arr.empty();/// gives bollena is array empty or not
cout <<arr.size()<<endl;
cout <<arr.max_size();
// begin();
// end();
return 0;
}