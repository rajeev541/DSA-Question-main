//  #Facebook   #Alibaba

//  Consider the array {2,1,5,6,3,8} and 'K' = 3, the sorted array will be {8, 6, 5, 3, 2, 1}, and the 3rd largest element will be 5.

#include<bits/stdc++.h>
int kthLargest(vector<int>& arr, int size, int K)
{
	// Write your code here.
//     sort(arr, arr + size, greater<int>());
    sort(arr.begin(), arr.end(), greater<int>());
    return arr[K-1];
}