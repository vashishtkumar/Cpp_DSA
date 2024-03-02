// known as divide and conquer
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int mid, int right)
{
    int size1 = mid - left + 1;
    int size2 = right - mid;

    int *leftarr = new int[size1];
    int *rightarr = new int[size2];

    for (int i = 0; i < size1; i++)
    {
        leftarr[i] = arr[left + i];
    }

    for (int i = 0; i < size2; i++)
    {
        rightarr[i] = arr[mid + 1 + i];
    }
    int sub1 = 0, sub2 = 0;
    int merge = left;
    while (sub1 < size1 && sub2 < size2)
    {
        if (leftarr[sub1] <= rightarr[sub2])
        {
            arr[merge++] = leftarr[sub1++];
        }
        else
        {
            arr[merge++] = rightarr[sub2++];
        }
    }

    // if some element is left

    while (sub1 < size1)
    {
        arr[merge++] = leftarr[sub1++];
    }
    // if some element of right side left

    while (sub2 < size2)
    {
        arr[merge++] = rightarr[sub2++];
    }

    delete[] leftarr;
    delete[] rightarr;
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
int main()
{
    int arr[] = {23, 78, 89, 45, 0, -89, 367, 200, 52, 12};

    mergeSort(arr, 0, 9);

    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{
    int size1 = mid - left + 1;
    int size2 = right - mid;

    vector<int> leftarr(size1);
    vector<int> rightarr(size2);

    // Copy elements to temporary vectors
    copy(arr.begin() + left, arr.begin() + mid + 1, leftarr.begin());
    copy(arr.begin() + mid + 1, arr.begin() + right + 1, rightarr.begin());

    int sub1 = 0, sub2 = 0;
    int merge = left;
    while (sub1 < size1 && sub2 < size2)
    {
        if (leftarr[sub1] <= rightarr[sub2])
        {
            arr[merge++] = leftarr[sub1++];
        }
        else
        {
            arr[merge++] = rightarr[sub2++];
        }
    }

    // Copy remaining elements
    while (sub1 < size1)
    {
        arr[merge++] = leftarr[sub1++];
    }
    while (sub2 < size2)
    {
        arr[merge++] = rightarr[sub2++];
    }
}

void mergeSort(vector<int> &arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main()
{
    vector<int> arr = {23, 78, 89, 45, 0, -89, 367, 200, 52, 12};

    mergeSort(arr, 0, arr.size() - 1); // Adjust right index for vector size

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
