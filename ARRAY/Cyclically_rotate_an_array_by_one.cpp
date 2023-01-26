void rotate(int arr[], int n)
{
    int temp = arr[n-1];
   
    int i;
    i = n-2;
    for( i =n ;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
}