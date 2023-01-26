
//  #accenture

vector<int> sumOfEvenOdd(long long num) 
{
	// Write your code here.
    long long int even = 0;
    long long int odd = 0;
    
    vector<int>sum;
    while(num!=0)
    {
        int check = num % 10;
        if(check%2==0){
            even = even + check;
        }
        else{
            odd = odd + check;
        }
        num = num / 10;
    }
    sum.push_back(even);
    sum.push_back(odd);
    return sum;
}