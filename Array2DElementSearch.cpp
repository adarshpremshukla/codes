#include<iostream>
using namespace std;

bool elementIsPresent(int array[][4],int target,int i, int j){

    //we need to specify column size when passing a 2D array as a parameter


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(array[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}


int main() 
{
    

    int array[3][4];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>array[i][j];
        }
    }


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search "<<endl;
    int target;
    cin >> target;

    if(elementIsPresent(array, target , 3 , 4)) 
    {
        cout<<"Element Present "<<endl;
    }
    else 
    {
        cout<<"Not present "<<endl;
    }

}