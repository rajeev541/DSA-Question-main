//  #infosys

void divideByFour(vector<int> &arr){
    // Write your code here.
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        arr[i] = arr[i]/4;
        if(arr[i] == 0)
            arr[i] = -1;
    }
}