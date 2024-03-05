#include <iostream>
using namespace std;
int uniqueElement(int arr[],int n)
{ int unique=0;
for(int i=0;i<n;i++){
unique^=arr[i];
}
return unique;
}
int main()
{
    int arr[100];
    int size,unique;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
unique=uniqueElement(arr,size);
cout<<unique;
return 0;
}