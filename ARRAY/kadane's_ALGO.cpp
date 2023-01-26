//  #facebook   #Microsoft  #GoldmanSach    #CloudEra

//  MAXIMUM SUBARRAY SUM

#include<climits>
#include<bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long curSum= 0;
        long long maxi = 0;
//     	int maxSum = INT_MIN;
        for(int i=0;i<n;i++){
            curSum = curSum + arr[i];
            maxi = max(curSum,maxi);
//             if(curSum > maxi)
//                 maxi = curSum;
            if(curSum < 0)
                curSum = 0;
        }
        return maxi;
}