// #Cognizent


void printPattern(int n) {
	// Write your code here.
    
   // method 1.
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++){
//             if(j<=i)
//                 cout<<"1";
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
    
    //Method 2.
    string ans = "1";
    for(int i=0;i<n;i++){
        cout<<ans;
        ans = ans +"1";
        cout<<endl;
    }
}