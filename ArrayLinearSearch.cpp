#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;

}
int main(){
    // int size;
    // cout<<"size of array"<<endl;
    // cin>>size;
   
    // int arr[100];

    // cout<<"array elements"<<endl;

    // for(int i=0; i<size;i++){
    //     cin>>arr[i];
    // }

    // -------------------------------or-------------------------

    int arr[10]={1,2,3,4,5,6,7,8,9,20};
    
    int key;
    cout<<"key of array"<<endl;
    cin>>key;

    // bool found=search(arr,size,key);
            
            // OR

     bool found=search(arr,10,key);

    if (found){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is not present "<<endl;
    }

}