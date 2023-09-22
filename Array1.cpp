#include<iostream>
using namespace std;

// int main(){

    // // declaration
    // int array[7];

    // //accessing the element
    // cout<<endl<<array[0]<<endl;



    // //initialization
    // int num[3]={1,2,3};
    // cout<<endl<<num[2]<<endl;



    // //int arr[15]={2,3,4,5,7};
    // int arr[15];
    // int n=15;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }


    // //initializing all locations with 0
    // int arrr[10]={0};
    // int n=10;
    // for(int i=0;i<n;i++){
    //     cout<<arrr[i]<<endl;
    // }  


    // int arrr[10]={1};
    // int n=10;
    // for(int i=0;i<n;i++){
    //     cout<<arrr[i]<<endl;
    // }
// }

    void printArray(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }  
    int main(){
        int array[10];
        printArray(array,10);

        cout<<endl;

        int first[15]={1,2,3,4,5,6,7,8,9,0,2,3,4,3,3};
        printArray(first,15);
    } 
     


