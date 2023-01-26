#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // chaturai (2^31-1 + 2^31-1).
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12};
    // int arr[] = {1, 3, 5, 7, 9};

    int n = sizeof(arr) / sizeof(int);
    int key = 12;
    int index = binarySearch(arr, n, key);

    cout << "index of " << key << " is : " << index << endl;
    return 0;
}