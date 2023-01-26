/*
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/

#include <iostream>
using namespace std;

void Print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int ReverseArray(int *Even, int start, int end)
{
    while (start < end)
    {
        // Custom implementation
        int temp = Even[start];
        Even[start] = Even[end];
        Even[end] = temp;
        start++;
        end--;

        // Or you can use built in function swap.
        /*  swap(Even[start],Even[end]);
            start++;
            end--;
        */
    }
}

int main()
{
    int Even[100] = {4, 5, 1, 2};
    int Odd[100] = {1, 2, 3};

    // for even
    // int size = 4;
    // ReverseArray(Even, 0, size - 1);
    // Print(Even, size);

    //For Odd
    int size = 3;
    ReverseArray(Odd,0,size-1);
    Print(Odd, size);

    return 0;
}