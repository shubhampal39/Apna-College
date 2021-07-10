


#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *left,*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;

    }
};
Node* insertBST(Node *root,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }

if(val < root->data)
        root->left=insertBST(root->left,val);
else
   root->right=insertBST(root->right,val);        

return root;
}
void inorder(Node *root)
{
if(root==   NULL) return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

bool binarysearchtree(Node *root,int val )
{
   if(root== NULL) return false;
   if(root->data==val) return true;
   if(root->data >val)
      return  binarysearchtree(root->left,val);
    // else
      return binarysearchtree(root->right,val);
    //  return false;  
}
Node * inorderSucc(Node *root)
{
    Node * curr=root;
    while(curr && curr->left!=NULL)
        curr=curr->left;
     return curr;   
}


Node * deleteInBST(Node * root, int key)
{
    if(key<root->data)
         root ->left =deleteInBST(root->left,key);
     else if(key>root->data)
        root->right-deleteInBST(root->right,key);
     else
      {  if(root->left==NULL)
           { Node *temp=root->right;
            free(root);  
            return temp;}
             
           else if(root->right==NULL){
              { Node *temp=root->left;
               free(root);
               return temp;}
           }
        //    case 3
           Node *temp=inorderSucc(root->right);
           root->data=temp->data;  //swap
           root->right=deleteInBST(root->right,temp->data);
      }
      return root;
}
int main() 
{
Node* root=NULL;
root=insertBST(root,5);
insertBST(root,1);
insertBST(root,3);
insertBST(root,4);
insertBST(root,2);
insertBST(root,7);
inorder(root);
deleteInBST(root,2);
cout<<endl;
inorder(root);

// if(binarysearchtree(root,6))
// {
//     cout<<"key exist";
// }
// else{
//     cout<<"key not exist";
// }
return 0;

}
