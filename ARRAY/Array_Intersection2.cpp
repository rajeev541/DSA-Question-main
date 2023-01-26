
// Optimized solution.
// if are in increasing order only.
#include <iostream>
using namespace std;

int Intersection(int arr1[], int arr2[], int n, int m);

int Intersection(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        else
        {
            j++;
        }
    }
}

int main()
{
    int arr1[100] = {1, 2, 2, 2, 3, 4};
    int arr2[100] = {2, 2, 3, 3};
    int n = 6;
    int m = 4;

    Intersection(arr1, arr2, n, m);
    return 0;
}