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
int height(Node* node){
    if(node==NULL)
        return 0;
    int lheight=height(node->left);
    int rheight=height(node->right);
    
    if(lheight>rheight)
        return lheight + 1;
    return rheight + 1;
    
}

void printGivenLevel(Node* root,int level){
    if(root==NULL)
        return;
    if(level==1)
        cout<<root->data<<" ";
    else if(level > 1){
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}

void levelOrder(Node* root)
{
  int h=height(root);
  for(int l=1;l<=h;l++)
        printGivenLevel(root,l);
}
