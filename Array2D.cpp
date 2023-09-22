#include<iostream>
using namespace std;
int main() 
{
    // create 2D array

    int array[3][4];

    
    //Taking input ---> row wise input

    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         cin>>array[i][j];
    //     }
    // }



    //Taking input ---> column wise input

    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cin>>array[j][i];
    //     }
    // }


    // int array[3][4]={1,2,3,4,5,6,7,8,9,2,4,5,}; 
    // either we can print by giving direct value  at the time of creating 2d array but this will take input in row form.


    // int array[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    //Print
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }





}