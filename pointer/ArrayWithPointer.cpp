#include <iostream>
using namespace std;
int main()
{
   // array with pointer; 
      int arr[6] = {1, 2, 3, 4, 5, 6};
      cout << *(arr + 1) << " " << *(1 + arr) << " " << 1 [arr] << " " << arr[1] << endl;              // it is like( indexAdresss=baseAddress+i*sizeofdataType; )
      cout << "address : " << arr + 1 << " " << 1 + arr << " " << &1 [arr] << " " << &arr[1] << endl; // it is like( indexAdresss=baseAddress+i*sizeofdataType; )

      int *ptr = arr;
      cout << "doing with taking other pointer " << endl;
      cout << *(ptr + 1) << " " << *(1 + ptr) << " " << 1 [ptr] << " " << ptr[1] << endl;              // it is like( indexAdresss=baseAddress+i*sizeofdataType; )
      cout << " address : " << ptr + 1 << " " << 1 + ptr << " " << &1 [ptr] << " " << &ptr[1] << endl; // it is like( indexAdresss=baseAddress+i*sizeofdataType; )

    //  airthematic operation;

    for (int i = 0; i < 6; i++) // operation on arr is not allowed;
    {
        cout << *ptr << " "; // it is like( indexAdresss=baseAddress+i*sizeofdataType; )

        ptr++;
    }

return 0;

}