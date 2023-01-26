
//  #Amazon #Microsoft

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {0, 0, 1, 1, 2, 2, 2, 2};
    int size = sizeof(arr) / sizeof(int);
    int key = 2;

    cout << "first ocurrence of " << key << " at index of " << firstOcc(arr, size, key) << endl;
    cout << "last  ocurrence of " << key << " at index of " << lastOcc(arr, size, key) << endl;

    int first = firstOcc(arr, size, key);
    int last = lastOcc(arr, size, key);

    int total = (last - first) + 1;
    cout << "total occurrence " << total << endl;

    return 0;
}