#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Queue{
    int arr[MAX];
    int head;
    int tail;

    public:
        Queue(){
            tail=head=-1;
        
        }
    bool enQueue(int x);
    int deQueue();
    bool isEmpty();
};

bool Queue::enQueue(int x){
    if((tail+1)%MAX==head){
        return false;
    }
    tail=(tail+1)%MAX;
    arr[tail]=x;
    if(head==-1)
        head=tail;
    return true;
}

int Queue::deQueue(){
    if(head==-1){
        return 0;
    }
    
    int x = arr[head]; 
    if(head==tail)
        head=tail=-1;
    else
        head=(head+1)%MAX;
    return x;
}
int main(){
    struct Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    cout<<q.deQueue()<<"dequeued";
    cout<<q.deQueue()<<"dequeued";
    return 0;
    
}

