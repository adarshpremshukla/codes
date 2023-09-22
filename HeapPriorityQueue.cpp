#include<iostream>
#include<queue>
using namespace std;

int main()
{
    cout<<" Priority queue here " <<endl;

    //max heap
    priority_queue<int>pq;

    pq.push(80);
    pq.push(45);
    pq.push(34);
    pq.push(23);
    pq.push(65);
    pq.push(54);

    cout<<"element on top "<<pq.top() << endl;
    pq.pop();
    cout<<"element on top "<<pq.top() << endl;


    //minheap
    priority_queue<int,vector<int>,greater<int>> minheap;
    minheap.push(80);
    minheap.push(45);
    minheap.push(34);
    minheap.push(23);
    minheap.push(65);
    minheap.push(54);

    cout<<"element on top "<<minheap.top() << endl;
    minheap.pop();
    cout<<"element on top "<<minheap.top() << endl;
}