

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left,*right;
    Node(int val)
    {
        data=val;
        left=NULL;right=NULL;
    }
};

vector <Node*> constructBinaryTrees(int start,int end)
{
     vector<Node*> trees;
    if(start>end) {
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++)
    {
        vector<Node*> leftSubtrees=constructBinaryTrees(start,i-1);
        vector<Node*> rightSubstrees=constructBinaryTrees(i+1,end);
        for(int j=0;j<leftSubtrees.size();j++)
        {     Node *left=leftSubtrees[j];
            for(int k=0;k<rightSubstrees.size();k++)
            {
                Node *right=rightSubstrees[k];
                Node *node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);
            }
        }
    }

    return trees;
}
void preorder(Node *root)
{
   if(root==NULL) return;
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
}

int main() {
vector<Node*> totaltrees=constructBinaryTrees(1,3);

    for(int i=0;i<totaltrees.size();i++)
    {
            cout<<(i+1)<<":";
            preorder(totaltrees[i]);
            cout<<endl;
    }

return 0;

}
