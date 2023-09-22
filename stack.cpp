#include<iostream>
#include<stack>
using namespace std;


/*
int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);


    s.pop();
    s.pop();
    // s.pop();
    // s.pop();

    // s.top();
    // cout << s.top() << endl;

    // s.empty();
    // cout << s.empty() << endl;

    if(s.empty())
        cout << " Stack is empty " << endl;

    else{
        cout << " Stack is not empty " << endl;
    }

    cout << " size of stack is " << s.size() << endl;
}

*/


class Stack
{
    public:
        int *arr;
        int top;
        int size;

    //constructor
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << " stack overflow " << endl;
        }
    }



    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout << " stack underflow " << endl;
        }
    }

    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << " stack is empty " << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(1);
    st.push(21);
    st.push(14);
    st.push(11);
    st.push(19);

    st.pop();


    cout << st.peek() << endl;
    
}