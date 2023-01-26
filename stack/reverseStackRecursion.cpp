
//  #AMDOCS

void insertBottom(stack<int> &s,int num)
{
     //base case
    if(s.empty()){
        s.push(num);
        return ;
    }
    int temp = s.top();
    s.pop();
    
    insertBottom(s, num);
    s.push(temp);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    
    //base case
    if(stack.empty())
        return ;
    
    int num = stack.top();
    stack.pop();
    
    reverseStack(stack);
    
    insertBottom(stack,num);
}