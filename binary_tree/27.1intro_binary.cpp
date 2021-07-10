


// # Properties of binary trees

// 1.Maximum nodes at level l = 2^l
// 2. Maximumn nodes in a tress of height H is (2^H)-1
// 3. For N nodes minimum possible height or minimum number of levels are
// log2(N+1)
// 4.A binary tree with L leaves has at least log2(N+1)+1
// number of levels

#include<bits/stdc++>
using namespace std;

struct Node {
    int data;
     struct Node *left;
     struct Node *righ;
     Node(int val)
     {
         data=val;
         left=NULL;
         right=NULL;
     }
}; 

int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    root->left->left=new Node(4);
        
        
}

//     1
//    /  \
//    2   3
//  /  \
//  4   5