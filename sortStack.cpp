/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of the class is
class SortedStack{

public:
	stack<int> s;
	void sort();
};
*/
/* The below method sorts the stack s 
you are required to complete the below method */


void insertAtSortedPos(stack<int> &s, int x){
    if(s.empty() or x>s.top()){
        s.push(x);
    }
    else{
        int a = s.top();
        s.pop();
        insertAtSortedPos(s,x);
        s.push(a);
    }
}

void SortedStack :: sort()
{
   if (s.size()>0){
       int x = s.top();
       s.pop();
       sort();
       insertAtSortedPos(s, x);
       
   }
}
