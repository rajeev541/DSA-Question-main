
// #Amazon #facebook.

#include <iostream>
using namespace std;

//  bruteforce approch.
/*
void sortArray(int arr[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[s], arr[i]);
            s++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        int element = arr[j];
        for (int k = j + 1; k < n; k++)
        {
            if (element > arr[k])
            {
                swap(arr[j], arr[k]);
            }
        }
    }
}
*/

// Optimezed solution.
void sortArray(int arr[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[s], arr[i]);
            s++;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count++;
        else if (arr[i] == 1)
        {
            swap(arr[count], arr[i]);
            count++;
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int arr[] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
    int arr[] = {2, 2, 2, 1, 1, 1, 0};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);
    sortArray(arr, size);
    print(arr, size);
    return 0;
}