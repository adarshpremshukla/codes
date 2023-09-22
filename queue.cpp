#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //create a queue
    // queue<int> q;
    
    // q.push(20);
    // q.push(17);
    // q.push(68);
    // q.push(4);

    // cout << q.size() << endl;
    // cout << q.front() << endl;

    // if(q.empty()){
    //     cout << "queue is empty" << endl;
    // } 
    // else{
    //     cout << "not empty" << endl;
    // }   



    // doubly ended queue (deque)


    deque<int> d;
    d.push_front(12);
    d.push_front(13);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;





}



