


// #algo
// 1. pick element from preorder and create a node
// 2. increment preorder index
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
            // left=NULL;
            // right=NUll;
        }
    };


node* createTreefromPreandInorder(int *in,int *pre,int s,int e){
        static int i=0;
        if(s>e) return  NULL;

        node *root=new node(pre[i]);
        int index=-1;
        for(int j=s;s<=e;j++)
        {
            if(in[j]==pre[i])
            {
                index=j;
                break;
            }
        }
        i++;
        root->left = createTreefromPreandInorder(in,pre,s,index-1);
        root->right =createTreefromPreandInorder(in,pre,index+1,e);
        return root;
}

int main() {
int a[]={1,2,3,4,8,5,6,7}; 
int b[]={3,2,8,4,1,6,7,5}; 
node *root=createTreefromPreandInorder(a,b,0,7);
// BFS(root);
return 0;
}
