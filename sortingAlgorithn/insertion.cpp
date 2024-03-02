#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {23, 4, 51, 7, 3, 2, 8,-50};
    int size = arr.size();
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i;
        while (j >= 1)
        {
            if (arr[j - 1] > temp)
            {
                arr[j] = arr[j - 1];
                j--;
            }
            else
                break;
        }
        if (j != i)
        {
            arr[j] = temp;
        }
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}

// time complexity is o(n^2) in worst and average but time complexity of o(n) in best case 
// space complexity o(1);