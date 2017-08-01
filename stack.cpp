#include <iostream>
#include <string>
using namespace std;

#define MAX 1000
class Stack
{
	int top;
public:
	int arr[MAX];
	Stack(){top=-1;};
	bool push(int x,int pos);
	bool push(int x);
	int pop();
	bool isEmpty();
	void print();
	//~Stack();
	
};

bool Stack::push(int x,int pos){
	if(top >= MAX)
		return false;
	int i=++top;
	int temp=arr[pos];
	arr[pos]=x;
	while(i>pos+1)
	{
		arr[i]=arr[i-1];
		i--;
	}
	arr[pos+1]=temp;
	return true;
}

bool Stack::push(int x){
	if(top >=MAX)
		return false;
	arr[++top]=x;
	return true;
}
int Stack::pop(){
	if(top==-1)
		return -1;
	return arr[top--];
}

bool Stack::isEmpty(){
	if(top==-1)
		return true;
	return false;
}

void Stack::print(){
	int i = top;
	while(i>=0)
	{
		cout<<arr[i]<<endl;
		i--;
	}
}

int main()
{
	struct Stack s;
	s.push(10,0);	
	s.push(11,1);
	s.push(12,2);
	s.push(13,3);
	s.push(1,2);
	s.push(33);
	s.print();
	cout<<s.pop()<<endl;
	return 0;
}
