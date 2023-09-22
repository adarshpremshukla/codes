#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;

    return n * factorial(n-1);
}


int power(int n1)
{
    if(n1 == 0)
        return 1;

    return 2 * power(n1-1);
}


int print(int n2)
{
    if(n2 == 0)
        return 0;

    cout << n2 << endl;  //print  backward counting
    print(n2-1);
    cout << n2 << endl;  //print  forward counting

}



int main()
{
    int n;
    cout << "Enter the value of n "<< endl;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;


    int n1;
    cout << "Enter the value of n1 "<< endl;
    cin >> n1;

    int sol = power(n1);
    cout << sol << endl;


    int n2;
    cout << "Enter the value of n2 "<< endl;
    cin >> n2;

    print(n2);
}