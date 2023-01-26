//  #AMDOCS

// #include<vector>
vector<int> copyAndReverse(vector<int> arr, int n) {
	// Write your code here.
    vector<int>a;
    
    for(int i=0;i<n;i++)
    {
        a.push_back(arr[i]);
    }
    int s = 0;
    int e = a.size()-1;
    while(s <= e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
}	