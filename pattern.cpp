#include<iostream>
using namespace std;
int main(){

/*
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }




    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    int n;
    cin>>n;
    int i=1;
    while (i<=n)        
    {       
        int j=1;
        while (j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


    int n;
    cin>>n;
    int i=1;
    while (i<=n)        
    {       
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    

    int n;
    cin>>n;
    int i=1;
    int count=1;
    while (i<=n)        
    {       
        int j=1;
        while (j<=n)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


    int n;
    cin>>n;
    int i=1;
    while (i<=n)        
    {       
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


    int n;
    cin>>n;
    int i=1;
    while (i<=n)        
    {       
        int j=1;
        while (j<=i)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


    int n;
    cin>>n;
    int i=1;
    int count=1;
    while (i<=n)        
    {       
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


    int n;
    cin>>n;
    int i=1;
    while(i<=n){    
        int j=1;
        int value=i;
        while(j<=i){
            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


    int n;
    cin>>n;
    int i=1;
    while (i<=n)            
    {
        int j=1;
        while (j<=n)
        {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }



 int n;
    cin>>n;
    int i=1;
    while (i<=n)            
    {
        int j=1;
        while (j<=n)
        {
            char ch='A'+j-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }



int n;
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    while(j<=n)
    {
        char ch='A'+i+j-2;
        cout<<ch;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}



    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

 


int n;
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    char value='A';
    while(j<=i)
    {
        cout<<value;
        value=value+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

 

    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch='A'+i-1;
        while(j<=i)
        {
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }




    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch='A'+n-i;
        while(j<=i)
        {
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    

    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    


    int n;
    cin>>n;
    int i = 1;

    while (i <=n)
     {
        int j = 1;
        while (j <= i) {
            cout << "*";
            j=j+1;
        }

        cout<<endl;
        i=i+1;
    }

*/


int n;
cin>>n;
int i=1;
while (i<=n)
{
    int space=n-i;
    while (space)
    {
        cout<<" ";
        space=space-1;
    }

    int j=1;
    while (j<=i)
    {
        cout<<j;
        j=j+1;
    }
    
    int start=i-1;
    while (start)
    {
        cout<<start;
        start=start-1;
    }
    cout<<endl;
    i=i+1;
    
}



}




