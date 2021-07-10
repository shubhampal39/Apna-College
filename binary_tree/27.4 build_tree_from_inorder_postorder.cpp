


// #algo
// 1. pick element from end in postorder and create a node
// 2. Decrement preorder index
// 3. search for picked element's pos in inorder
// 4. call to build left subtree from inorder 0 to po-1
// 5. call to build right subtree from inorder pos+1 to n
// 6. return the node

#include<bits/stdc++.h>
using namespace std;
    class node{
        public:
        int data;
        node *left;
        node *right;

        node(int y)
        {
            data=y;
            left=nullptr;
            right=nullptr;
        }
    };


// node* createTreefromPreandInorder(int *in,int *pre,int s,int e){
//         static int i=0;
//         if(s>e) return  NULL;

//         node *root=new node(pre[i]);
//         int index=-1;
//         for(int j=s;s<=e;j++)
//         {
//             if(in[j]==pre[i])
//             {
//                 index=j;
//                 break;
//             }
//         }
//         i++;
//         root->left = createTreefromPreandInorder(in,pre,s,index-1);
//         root->right =createTreefromPreandInorder(in,pre,index+1,e);
//         return root;
// }
int search(int inorder[],int start,int end,int val)
{
    for(int i=start;i<=end;i++)
        {
            if(inorder[i]==val)
            {
                return i;
            }
        }
        return -1;
}
node* buildTree(int postorder[],int inorder[],int start,int end)
{
    static int idx=4;
    if(start>end)
          return NULL;

    int val=postorder[idx];
    idx--;
    node* curr=new node(val);
    if(start==end) return curr;
    int pos=search(inorder,start,end,val);
    curr->right=buildTree(postorder,inorder,pos+1,end);
    curr->left=buildTree(postorder,inorder,start,pos-1);
    
    return curr;
} 
void inorderPrint(node *root)
{
    if(root==NULL) return;
   inorderPrint(root->left);
   cout<<root->data<<" ";
   inorderPrint(root->right);

}

int main() { 
int post[]={4,2,5,3,1};
int inorder[]={4,2,1,5,3};
node *root=buildTree(post,inorder,0,4);
inorderPrint(root);
return 0;
}
