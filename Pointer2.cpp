#include<iostream>
using namespace  std;

int main()
{
    /*
    int arr[10] = {2,3,4,5,6,7,8,9,11,23};
    cout << " The address of 1st index is " << arr << endl;   //same
    cout << " The address of 1st index is " << &arr[0] <<endl;  //same
    cout << " The value of 1st index is " << arr[1] << endl;   //print the value of index 1
    cout << " The value of 1st index is " << *(arr + 1) << endl; //print the value of index 1
    cout << " The value of 0th index is " << *arr << endl;
    cout << " The updated value of 0th index is " << *arr + 1 << endl;

    cout << endl;

    
    int i=3;
    cout << arr[i] << " " << *(arr+i) << endl;
    cout << i[arr] << " " << *(i+arr) << endl;

    cout << endl;


    int temp[10] = {1,2};
    cout << sizeof(temp) << endl;
    cout << sizeof(&temp) << endl;
    cout << sizeof(*temp) << endl;

    cout << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    cout << endl;


int a[20] = {1,2,3,4};
cout << a[0] << endl;    //value
cout << &a[0] << endl; //Address
cout << &a << endl;  //Address
cout << a << endl; //Address


cout << endl;


int *p = &a[0];
cout << p << endl; //Address
cout << *p << endl; //value
cout << &p << endl; //Address of p's dibba

cout << endl;


int arrr[10];
// arr = arr + 1;    //error

int *ptrr = &arrr[0];
cout << ptrr << endl;
ptrr = ptrr + 1;
cout << ptrr << endl;

*/


int arr[10] = {1,2,3,4,5};
char ch[6] = "abcde";

cout << arr << endl;
cout << ch << endl;

char *c = &ch[0];
cout << c << endl;
cout << *c << endl;
cout << &c << endl;

}