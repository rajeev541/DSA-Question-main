//      #Wipro

#include<bits/stdc++.h>
long long int reverseNumber(long long int n)
{
	//type your code here
   
    long long int rem ;
    long long int ans = 0;
    while(n > 0){
         rem = n % 10;
        ans = rem + ans*10;
        n = n/10;
    }
    return ans;
    
}
