#include<iostream>
#include<vector>
using namespace std;

//Top down Aprroach

// int fib(int n, vector<int>&dp)
// {
//     if(n<=1){
//         return n;
//     }

//     if(dp[n]!=-1){
//         return dp[n];
//     }

//     dp[n]=fib(n-1,dp)+fib(n-2,dp);
//     return dp[n];
// }

// int main()
// {
//     int n;
//     cin>>n;

//     vector<int> dp(n+1);
//     for(int i=0;i<=n;i++){
//         dp[i]=-1;
//     }
//     cout<<fib(n,dp)<<endl;
// }


//Bottom Up Aprroach

int main()
{
    // int n;
    // cin>> n;
    // vector<int> dp(n+1);
    // dp[0]=0;
    // dp[1]=1;

    // for(int i=2;i<=n;i++){

    //     dp[i]=dp[i-1]+dp[i-2];
    // }
    // cout<<dp[n]<<endl;





    //with the help of variable

        int n;
        cin>>n;

        int p1=1;
        int p2=0;

        if(n==0)
            return p2;

        for(int i=2;i<=n;i++){
                int curr=p1+p2;

                p2=p1;
                p1=curr;
        }
        cout<<p1<<endl;

}