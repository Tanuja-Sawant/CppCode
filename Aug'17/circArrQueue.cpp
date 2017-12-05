/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* 
The structure of the class is
class Queue {
private:
    int arr[10001];
    int front;
    int rear;
public :
    Queue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue */
void Queue :: push(int x)
{
    if(front==0 && rear==0){
        front=rear=1;
        arr[rear]=x;
        return;
    }
    if(rear>9999)
    return;

    rear=(rear+1)%10001;
    arr[rear]=x;
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
    if(front==0 && rear==0){
        return -1;
    }
    else if (front==rear && rear!=0){
        int temp=arr[front];
        front=0;
        rear=0;
        return temp;
    }
    else{
        int temp=arr[front];
        front=(front+1)%10001;
        return temp;       
    }
        
}
