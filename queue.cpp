/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* 
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};
and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue*/
void Queue:: push(int x)
{
    QueueNode *temp=new QueueNode;
    temp->data=x;
    if(rear==NULL){
       rear=front=temp;
    }
    else{
       rear->next=temp;
       rear=temp;
    }
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
    if(front==NULL)
        return -1;
    else{
        QueueNode *temp=new QueueNode;
        temp=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        return temp->data;
    }
}
