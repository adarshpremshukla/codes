#include<iostream>
using namespace  std;

int main()
{
    int num = 5;
    cout << num << endl;
    cout << "Address of num is " << &num << endl;

    int *p = &num;  //p is a pointer to int
    cout << *p << endl;
    cout << p << endl;

    
    cout << endl;


    double numb = 5;
    cout << numb << endl;
    cout << "Address of numb is " << &numb << endl;

    double *ptr = &numb;  //ptr is a pointer to double
    cout << *ptr << endl;
    cout << ptr << endl;


    cout << endl;


    int *p1 = 0; //pointer to int is created and pionting to some garbage value but it is a bad practice, assign pointer to 0 in this case
    cout << *p1;

    

}

