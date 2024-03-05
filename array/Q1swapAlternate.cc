#include <iostream>
using namespace std;
void printArray(int arr[],int size)
{
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
 void alternateSwap(int arr[],int size)
 { for(int i=0;i<size;i+=2)
    if(i+1<size){
        int j=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=j;
        /* 2nd way
        arr[i]=arr[i]+arr[i+1];
        arr[i+1]=arr[i]-arr[i+1];
        arr[i]=arr[i]-arr[i+1];*/
    /* third Way
    swap(arr[i],arr[i+1]);
    */
 }}

int main()
{int arr[5]={1,2,3,4,6};
int vas[6]={8,6,7,5,43,65};
alternateSwap(arr,5);
alternateSwap(vas,6);
printArray(arr,5);
printArray(vas,6);
return 0;
}