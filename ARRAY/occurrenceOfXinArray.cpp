
//  #AMAZON     #DIRECTI

int countOccurences(int arr[], int n, int X)
{
    int count = 0;
	for(int i = 0;i<n;i++)
    {
        if(X == arr[i])
            count++;
    }
    return count;
}