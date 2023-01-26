
//  #AMAZON     #IBM        #GOLDMANSACH

void sortedInsert(stack<int> &s,int n)
{
    //base case
    if((s.empty()) || (!s.empty() &&  s.top() < n))
    {
        s.push(n);
        return;
    }
    
    int num = s.top();
    s.pop();
    
    sortedInsert(s,n);
    
    s.push(num);
}

void sortStack(stack<int> &stack)
{
	//base case
    if(stack.empty())
        return ;
    
    int num = stack.top();
    stack.pop();
    
    //recursive call 
    sortStack(stack);
    
    sortedInsert(stack,num);
}