// #pwc

void SelectionSort(vector<int>& arr, int size)
{
    int indexOfMin, temp;
    for (int i = 0; i < size - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    SelectionSort(arr,n);
}