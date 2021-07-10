

//check balanced height tree
//for each node,
// the differnce between the heightd of the 
// left subtree and right subtree<=1
#include <iostream>
using namespace std;
struct node{
   int data;
   struct node* left;
   struct node *right;
   node(int n)
   {
       data=n;
       left=NULL;
       right=NULL;
   }
};
int height(node *root)
{
     if(root==NULL) return 0;
     return max(height(root->left),height(root->right))+1;
}

bool isBalanced(node *root)
{
    if(root==NULL) 
        return true;
    if(isBalanced(root->left)==false)
            return false;
     if(isBalanced(root->right)==false)
            return false;
     int lh=height(root->left);
     int rh=height(root->right);
     if(abs(lh-rh)<=1){
         return true;
     }
     else{
         return false;
     }
}
int main() {
   node *root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);
//    root->right->right->right=new node(7);
//    root->right->right->right->right=new node(7);
   

    if(isBalanced(root))
    {
        cout<<"Balanced tree";
    }
    else{
        cout<<"unBalanced tree";
    }
}


