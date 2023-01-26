    //      TLE 

    vector<int> nextGreaterElement(vector<int>& arr, int n){
    // Write your code here.
    vector<int>ans;
   
    for(int i=0;i<n;i++)
    {
        int temp = arr[i];
        int count = -1;
        for(int j=i+1;j<n;j++)
        {
       		if(temp < arr[j]){
                count = arr[j];
                break;
            }
        }
        ans.push_back(count);
    }
    return ans;
}