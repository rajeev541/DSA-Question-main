// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    
        int res = 0, base = 1;
        while(n){
            int val = n % 10;
            if(val == 0)
                val = 5;
            res = (val * base) + res;
            base = base * 10;
            n = n/10;
        }
        return res;
}