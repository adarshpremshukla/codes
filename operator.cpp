#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // int a=2;
    // int b=6;
    // cout<<(a&b)<<endl;
    // cout<<~a<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;

    // cout<<endl;

    // cout<<(a<<2)<<endl;
    // cout<<(a>>2)<<endl;
    // cout<<(b<<2)<<endl;
    // cout<<(b>>2)<<endl;


    // int a,b=1;
    // a=10;
    // if(++a)
    //     cout<<b;
    // else
    //     cout<<++b;


// ---------------------------------counting---------------------------------
    // int n;
    // cin>>n;
    // int i=1;
    // for ( i = 1; i <=n  ; i++)          
    // {
    //     cout<<i<<endl;
    // }

// ------------------------------sum-----------------------------------------
    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    // int sum=0;
    // for (int i=1; i<=n; i++)          
    // {
    //     sum=sum+i;
    // }
    // cout<<sum<<endl;

// -----------------------------fibonachi-----------------------------------

    // int n=10;
    // int a=0;
    // int b=1;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // for (int i=1; i<=n; i++)          
    // {
    //     int sum=a+b;
    //     cout<<sum<<" "<<endl;
    //     a=b;
    //     b=sum;
    // }
        
// ------------------------------prime---------------------------------------

    // int n;
    // cin>>n;
    // bool isPrime=1;
    // for(int i=2;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         isPrime=0;
    //         break;
    //     }
    // }
    // if (isPrime==0)
    // {
    //     cout<<"not a prime"<<endl;
    // }
    // else
    // {
    //     cout<<"prime number"<<endl;
    // }
    
    
// -----------------------------------------------------Decimal to binary------------------------------

// int n;
// cin>>n;

// int ans=0;
// int i=0;
// while (n!=0)
// {
//     int bit=n&1;
//     ans=(bit*pow(10,i))+ans;
//     n=n>>1;
//     i++;
// }
//     cout<<ans<<endl;

// -----------------------------------------------------binary to Decimal------------------------------

int n;
cin>>n;
int i=0;
int ans=0;
while (n!=0)
{
    int digit=n%10;
    if(digit==1)
    {
        ans=ans+pow(2,i);
    }
    n=n/10;
    i++;
}
    cout<<ans<<endl;






}
