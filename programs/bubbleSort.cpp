// #pwc

void BubbleSort(vector<int>& arr, int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Traversal(vector<int>& arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void bubbleSort(vector<int>& arr, int n)
{   
 	BubbleSort(arr,n); 
//     Traversal(arr,n);
}
