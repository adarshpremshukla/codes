#include<iostream>
#include<limits.h>
using namespace std;

void printRowSum(int array[][4],int i, int j){

    //we need to specify column size when passing a 2D array as a parameter

    cout<<"Printing the sum "<<endl;

    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            sum+=array[i][j];
        }
        cout<< sum<<" ";
    }
    cout<<endl;
}


// void printColSum(int array[][4],int i, int j){

//     //we need to specify column size when passing a 2D array as a parameter

//     cout<<"Printing the sum "<<endl;

//     for(int j=0;j<4;j++)
//     {
//         int sum=0;
//         for(int i=0;i<3;i++)
//         {
//             sum+=array[i][j];
//         }
//         cout<< sum<<" ";
//     }
// }


int largestRowSum(int array[][4],int i, int j)
{
    int maxi=INT_MIN;
    int rowIndex=-1;
        for(int i=0;i<3;i++)
        {
            int sum=0;
            for(int j=0;j<4;j++)
            {
                sum+=array[i][j];
            }
        
            if(sum>maxi)
            {
                maxi=sum;
                rowIndex=i;
            }
        }
    cout<<"The maximun sum is " <<maxi<<" ";
    return rowIndex;
}



int main() 
{
    int array[3][4];

 //Taking input ---> row wise input

    cout<<"Enter the elements "<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>array[i][j];
        }
    }


//Taking input ---> column wise input

    // cout<<"Enter the elements "<<endl;

    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cin>>array[j][i];
    //     }
    // }



    cout<<"Print the elements "<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }


    printRowSum(array,3,4);

    // printColSum(array,3,4);

    cout<<"Largest sum is at index "<<largestRowSum(array,3,4)<<endl;
}

//1 2 3 4 5 6 7 8 9 10 11 12