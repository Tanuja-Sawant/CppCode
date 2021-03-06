/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */
/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        s1.push(x);
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        if(s1.empty() and s2.empty())
            return -1;
        else if (s2.empty()){
            while(!s1.empty()){
                int a = s1.top();
                s1.pop();
                s2.push(a);
            }
        }
        int b = s2.top();
        s2.pop();
        return b;
}
