#include <iostream>
using namespace std;
int main()
{
    int n = 4, m = 4;
    int **ptr = new int *[n]; // declaring an row array;
    // for column
    for (int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
    }
    // inserting in 2d array;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ptr[i][j] = j;
        }
    }

    // printing the 2d array;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // deleteing the memeory from heap;

    for (int i = 0; i < n; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
    return 0;
}