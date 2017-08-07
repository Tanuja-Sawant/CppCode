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
    while(!q.empty()){
       node* temp=q.front();
       q.pop();
       if(temp->left==NULL){
           if(temp->right!=NULL){
               return false;
           }
       }
       else{
           q.push(temp->left);
       }
       if(temp->right){
           q.push(temp->right);
       }
    }
    return true;
}
