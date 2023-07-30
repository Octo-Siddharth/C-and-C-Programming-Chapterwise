//Using STL
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //Heap using priority queue by default its gives max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout<<"Top element : "<<pq.top()<<endl;

    cout<<"Size : "<<pq.size()<<endl;

    pq.pop();

    cout<<"Size : "<<pq.size()<<endl;

    cout<<"Top element : "<<pq.top()<<endl;

    if(pq.empty())
    {
        cout<<"Heap is empty";
    }
    else
    {
        cout<<"Heap is not empty";
    }

    //minheap

    priority_queue<int, vector<int>, greater<int> > minHeap;

    minHeap.push(4);
    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(2);
    minHeap.push(3);

    cout<<"\n\nTop element : "<<minHeap.top()<<endl;

    cout<<"Size : "<<minHeap.size()<<endl;

    minHeap.pop();

    cout<<"Size : "<<minHeap.size()<<endl;

    cout<<"Top element : "<<minHeap.top()<<endl;

    if(minHeap.empty())
    {
        cout<<"Heap is empty";
    }
    else
    {
        cout<<"Heap is not empty";
    }
}