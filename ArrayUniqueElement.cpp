#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,1,3,2};
int n=5;
int ans=0;
for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
cout<<ans<<endl;

}


// 1207 442