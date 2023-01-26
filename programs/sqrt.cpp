#include <iostream>
using namespace std;

int main() {
    //Write your code here
	int x,n;
    cin>>x>>n;
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans = ans * x ;
    }
    cout<<ans;
    return 0;
}