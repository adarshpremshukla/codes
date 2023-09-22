#include<iostream>
using namespace std;

/*
bool isSorted(int arr[], int size)
{
    if(size == 0 || size == 1)
        return true;
    
    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1 , size - 1);
        return remainingPart;
    }
}



int main()
{
    int arr[5] = {2,5,4,6,8};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans)
        cout << "Array is sorted " << endl;
    
    else
        cout << " Array is not sorted " << endl;
}

*/

bool binarySearch(int arr[] , int s , int e , int k)
{
    if(s > e)
        return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == k)
        return true;

    if(arr[mid] < k){
        binarySearch(arr , mid + 1 , e , k );
    }
    else{
        binarySearch(arr , s , mid-1 , k);
    }
}

int main()
{
    int arr[5] = {2,5,4,6,8};
    int size = 5;
    int key = 9;

    bool ans = binarySearch(arr,0,5,8);

    if(ans)
        cout << " Present " << endl;
    else
        cout << " Not present " << endl;

}