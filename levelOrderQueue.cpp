/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


queue<Node *> q;
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
//You are required to complete this method
void levelOrder(Node* node)
{
   q.push(node);
   while(q.empty()==false){
       Node *node=q.front();
       cout<<node->data<<" ";
       q.pop();
       if(node->left!=NULL){
           q.push(node->left);
       }
       if(node->right!=NULL){
           q.push(node->right);
       }
    }
    
}
