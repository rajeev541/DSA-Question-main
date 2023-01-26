//Optimized solution.
#include <iostream>
using namespace std;

int Find_Duplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int arr[100] = {3, 1, 3, 4, 2};
    int size = 5;

    cout << Find_Duplicate(arr, size);
    return 0;
}