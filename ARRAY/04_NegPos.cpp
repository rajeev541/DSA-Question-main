#include <iostream>
using namespace std;

int rearrange(int arr[], int size);
void print(int arr[], int n);

int rearrange(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                // swap(arr[i], arr[j]);
            }

            j++;
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
    int arr[100] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int size = 9;
    print(arr, size);
    rearrange(arr, size);
    print(arr, size);
    return 0;
}