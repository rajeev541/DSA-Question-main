#include <iostream>
using namespace std;


void sortArray(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        while (arr[i] == 0 && i < j)
            i++;

        while (arr[j] == 1 && i < j)
            j--;

        while (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}



//bruteforce solution.
/*
void sortArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (element > arr[j])
            {
                swap(arr[i], arr[j]);
                // break;
            }
        }
    }
}
*/
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
    int arr[] = {1, 1, 0, 0, 0, 1, 0};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);
    sortArray(arr, size);
    print(arr, size);
    return 0;
}