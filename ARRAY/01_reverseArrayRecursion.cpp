#include <iostream>
using namespace std;

int reverseArray(int arr[], int start, int end);
void print(int arr[], int n);

int reverseArray(int arr[], int start, int end)
{
    // base case;
    if (start >= end)
    {
        return end;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
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
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;

    print(arr, size);
    reverseArray(arr, 0, size - 1);
    cout<<"reversable list "<<endl;
    print(arr, size);
    return 0;
}