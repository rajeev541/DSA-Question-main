
//  #infosys

#include <iostream>
using namespace std;
void print(int arr[], int size);

void rotateArray(int arr[], int n, int k)
{
    // int temp = arr[0];
    int i, j;
    for (i = 0; i < k; i++)
    {
        int temp = arr[0];
        for (j = 0; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[j - 1] = temp;
    }
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
    int N;
    cin>>N;
    int arr[N];
    int k;

    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    cin>>k;

    rotateArray(arr,N,k);
    print(arr,N);

    return 0;
}