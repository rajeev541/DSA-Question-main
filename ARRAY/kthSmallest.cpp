#include<bits/stdc++.h>

int kthSmallest(vector<int> input, int k)
{
    int n = input.size();
    sort(input.begin(),input.end());
        k=k-1;
    	int ans = input[k];
        return ans;
}