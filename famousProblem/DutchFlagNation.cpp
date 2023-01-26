// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
        int low = 0;
        int mid = 0;
        int high = n-1;
        
        while(mid <= high)
        {
            if(a[mid] == 0){
                swap(a[mid],a[low]);
                low++;
                mid++;
            }
            else if(a[mid] == 1){
                mid++;
            }
            else if(a[mid] == 2){
                swap(a[mid],a[high]);
                high--;
            }
            
        }
    /*
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for(int i = 0;i<n;i++ )
        {
            if(a[i] == 0)
                cnt0++;
            else if(a[i] == 1)
                cnt1++;
            else
                cnt2++;
        }
        for(int i=0;i<n;i++)
        {
            if(cnt0 > 0)
            {
                a[i] = 0;
                cnt0--;
            }
            else if(cnt1 > 0)
            {
                a[i] = 1;
                cnt1--;
            }
            else if(cnt2 > 0){
                a[i] = 2;
                cnt2--;
                
            }
        }
        */
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends