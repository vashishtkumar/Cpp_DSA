#include <iostream>
using namespace std;
int main()
{
    int l = 4, n = 4, m = 4;
    // create 3d array

    int ***ptr = new int **[l];

    // create 2d array

    for (int i = 0; i < l; i++)
    {
        ptr[i] = new int *[n];
        for (int j = 0; j < n; j++)
        {
            ptr[i][j] = new int[m];
        }
    }

    // inserting val
    for (int i = 0; i < l; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < m; k++)
                ptr[i][j][k] = i + j + k;

    // print

    for (int i = 0; i < l; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < m; k++)
                cout << ptr[i][j][k] << " ";

    return 0;
}