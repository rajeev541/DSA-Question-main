// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
} // } Driver Code Ends

int transitionPoint(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    if (!arr[n - 1])
        return -1;

    while (s <= e)
    {
        if (arr[mid] == 0)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }

    return s;
}