#include<iostream>
using namespace std;



void update(int **p)
{
    // p = p + 1;
    //kuch change hoga   --> NO

    // *p = *p + 1;
    //kuch change hoga   --> YES

    **p = **p + 1;
    //kuch change hoga   --> YES
}

int main()
{
    
    int i = 5;
    int *p = &i;
    int **p1 = &p;

/*
    cout << "All is well " << endl;

    cout << endl; 

    cout << i << endl;
    cout << *p << endl;
    cout << **p1 << endl;

    cout << endl; 


    cout << &i << endl;
    cout << p << endl;
    cout << *p1 << endl;   

    cout << endl; 
 
     
    cout << &p << endl;
    cout << p1 << endl;
    */
    
    cout << endl; 

    cout << i << endl;
    cout << p << endl;
    cout << p1 << endl;

    update(p1);

    cout << endl; 


    cout << i << endl;
    cout << p << endl;
    cout << p1 << endl;


}