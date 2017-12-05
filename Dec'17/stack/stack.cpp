#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack{
    int a[MAX];
    int top;
    public:
        Stack(){
            top=-1;
        }
        bool push(int x);
        int pop();
        bool isEmpty();
};

bool Stack::push(int x){
    if(top==MAX-1){
        cout<<"StackOverflow";
        return false;
    }
    a[++top]=x;
    return true; 
}

int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow";
        return -1;
    }
    int x=a[top--];
    return x;
}

bool Stack:: isEmpty(){
    return (top<0);
}
int main(){
    struct Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<"popped";
    return 0;
}