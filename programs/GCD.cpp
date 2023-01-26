//  #Google     #Cognizant

int findGcd(int x, int y)
{
    // Write your code here
   int n1,n2;
     if (x > y)
    {
        n1 = x;
        n2 = y;
    }
    else
    {
        n1 = y;
        n2 = x;
    }
    int r = n1 % n2;
    while (r != 0)
    {
        n1 = n2;
        n2 = r;
        r = n1 % n2;
    }
    return n2;
}
