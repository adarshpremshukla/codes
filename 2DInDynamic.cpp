#include<iostream>
using namespace std;

int main()
{
    //for same row and col
    // int n;
    // cin >> n;

    //for diff row and col
    int row;
    cin >> row;

    int col;
    cin >> col;

    //creating 2d array

    // int** arr = new int*[n];

    // for(int i = 0; i < n; i++)
    // {
    //     arr[i] = new int[n];
    // }

    int** arr = new int*[row];
    
    for(int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
   

    //taking input
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    //printing
    cout << endl;
    
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout <<  endl;
    // }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout <<  endl;
    }
    // releasing memory

    for(int i = 0; i < row; i++)
    {
        delete []arr[i];
    }
    delete []arr;

}

