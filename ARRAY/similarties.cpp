
//  #facebook.
// some test case are wrong need to improvement.

#include <iostream>
using namespace std;

int printUnion(int arr1[], int arr2[], int m, int n)
{
    int comm = 0;
    int i = 0, j = 0;
    int count = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
            count++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
            count++;
        }
        //common element
        else
        {
            j++;
            i++;
            comm++;
            count++;
        }
    }

    // print remaining element in the array
    while (i < m)
    {
        i++;
        count++;
    }
    while (j < n)
    {
        j++;
        count++;
    }
    cout<<comm<<" "<<count;
}

int main()
{
    int a[] = {1,2};
    int b[] = {3,4};

    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int);

     printUnion(a, b, m, n);
   

    return 0;
}


//optimal solution.
/*





pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	sort(arr1.begin(),arr1.end());
   	sort(arr2.begin(),arr2.end());
   	int common =0, i=0,j=0;
   while(i<n && j<m){
       if(arr1[i]==arr2[j]){
           common ++;
           i++;
           j++;
       }
       else if(arr1[i]>arr2[j]){
           j++;
       }
           else  
               i++;
   }
      pair<int,int >p(common,(n+m-common));

       return p;
}

*/










