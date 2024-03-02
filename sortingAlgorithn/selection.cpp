#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 10> arr = {1, 5, 0, 45, 21, 3, -5, 67, 100, 34};
    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i], index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
            if (arr[i] != min)
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// time complexity is o(n^2) and auxiliary space complexity is o(1);