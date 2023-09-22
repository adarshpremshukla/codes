#include<iostream>
#include<math.h>
using namespace std;

// --------------------------power-----------------------------------------
// int main(){
    // int a;
    // int b;
    // int ans=1;
    // cin>>a>>b;
    // for(int i=1;i<=b;i++){
    //     ans=ans*a;
    // }
    // cout<<"Answer is "<<ans<<endl;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~short~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // int a,b;
    // cin>>a>>b;
    // cout<<(pow(a,b))<<endl;
    
// }


/*
int power(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<answer<<endl;
}




int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int  nume=factorial(n);
    int denom= factorial(r)*factorial(n-r);
    return nume/denom;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"answer is "<<nCr(n,r)<<endl;

}


void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    printCounting(n);

    return 0;
}

*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,arr[1000];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
      cout<<arr[i]<<" ";
    }
    return 0;
}