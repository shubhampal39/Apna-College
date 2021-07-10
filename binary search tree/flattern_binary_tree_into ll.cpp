

// flatterned binary tree into linkedlist
// 1.Recursivly flattern the left and right subtree
// 2.store the left tail and right tail
//3.store right subtree in temp and male left subtree as right subtree
//4. join right subtree with left tail
//5. return right tail
#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
     node *left;
    node *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void flattern(node *root)
{
 if(root==NULL || root->left==NULL && root->right==NULL)
      return;

  if(root->left!=NULL)
     {flattern(root->left);
      node *temp=root->right; 
      root->right=root->left;
      root->left=NULL;

    node *t=root->right;
    while(t->right!=NULL){
        t=t->right;
    }
    t->right=temp;
     }
    flattern(root->right);
}

void inorderprint(node *root)
{
    if(root==NULL)
      return;
     inorderprint(root->left);
     cout<<root->data<<" ";
     inorderprint(root->right); 
}  

int main()
{
    node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);
   inorderprint(root);
   cout<<endl;
   flattern(root);
   inorderprint(root);
   return 0;

}