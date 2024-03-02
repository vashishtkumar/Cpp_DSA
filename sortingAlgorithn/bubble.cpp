#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 10> arr = {45678, 1, 56, 3, -89, 56, 100, 0, -100, 478};
    int size = arr.size();
    bool swapped = false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped = false)
        {
            break;
        }
    }

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}

// time complexity is of o(n^2);
// space complexity id of o(1);