
//  #TCS

#include <vector>

vector < int > termsOfAP(int x) {
     vector<int>ans;
    int i = 1;
    int n = 1;
   while(n){
       int tempAns = (3 * n) + 2;
       if (tempAns % 4 != 0){
           ans.push_back(tempAns);
           i++;
       }
       if(i > x)
           break;
       n++;
   }
    return ans;
}
