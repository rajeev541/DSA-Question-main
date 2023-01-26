#include <iostream>
using namespace std;

void print(int arr[], int size);
int getMinMax(int arr[], int size);

int getMinMax(int arr[], int size)
{
    // initialize variable.
    int min = arr[0];
    int max = arr[0];

    // looping
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }
    cout << "min value of an array is : " << min << endl;
    cout << "max value of an array is : " << max;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100] = {2, 3, 5, 11, 1, 6};
    int size = 6;

    print(arr, size);
    getMinMax(arr, size);
    return 0;
}