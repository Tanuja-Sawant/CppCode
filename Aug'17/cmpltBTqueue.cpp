/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/
#include <queue>
using namespace std;
/* Given a binary tree, return true if the tree is complete
   else false */

bool isCompleteBT(struct node* root)
{
    queue<node *> q;

    if(root==NULL)
        return true;
    q.push(root);
    int flag=false;
    while(!q.empty()){
       node* temp=q.front();
       q.pop();
       if(temp->left){
           if(flag==true)
               return false;
           q.push(temp->left);
       }
       else
           flag=true;
       if(temp->right){
           if(flag==true)
               return false;
           q.push(temp->right);
       }else
           flag=true;
    }
    return true;
}
