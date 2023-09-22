#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[],int n){
    int maxi=INT_MIN;

    for(int i=0 ; i<n ; i++){
        
        maxi=max(maxi,arr[i]);

        // if(arr[i]>maxi){
        //     maxi=arr[i];
        // }

        // both can be used
    }
    return maxi;
}

int getMin(int arr[],int n){
    int mini=INT_MAX;

    for(int i=0 ; i<n ; i++){
        
        // if(arr[i]<min){
        //     min=arr[i];
        // }

        mini=min(mini,arr[i]);
    }
    return mini;
}

int main(){
    int size;
    cin>>size;

    int arr[100];

    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    cout<<"Max value is "<<getMax(arr,size)<<endl;
    cout<<"Min value is "<<getMin(arr,size)<<endl;

}