#include <iostream>
using namespace std;

void pairSum(int arr[], int size, int s)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {2, -3, 3, 3, -2};
    // int s = 5;
    int s = 0;
    int size = sizeof(arr) / sizeof(int);

    pairSum(arr, size, s);
    return 0;
}