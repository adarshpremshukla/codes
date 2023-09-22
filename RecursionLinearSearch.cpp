#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int size , int k)
{
    if(size == 0)
        return false;

    if(arr[0] == k)
        return true;

    bool remaining =  linearSearch(arr+1 , size-1 , k);
        return remaining;

}

int main()
{
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int key = 8;
    bool ans = linearSearch(arr , size , key);

    if(ans)
        cout << " key is present " << endl;

    else
        cout << " key is not present " << endl;
}