#include<iostream>
using namespace std;
/*
int main()
{
    int i = 5;
    int& j = i;
    cout << i << endl;
    cout << j << endl;
    cout << i++ << endl;
    cout << j++ << endl;
    cout << i << endl;
    cout << j << endl;
    
}
*/

void update1(int n)
{
    n++;
}


void update2(int& n)
{
    n++;
}

int main()
{
    int n=5;

    cout << "Before " << n << endl;
    update1(n);
    cout << "After " << n << endl;

    cout << endl;

    cout << "Before " << n << endl;
    update2(n);
    cout << "After " << n << endl;
}