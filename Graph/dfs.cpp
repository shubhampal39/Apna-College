

// DFS
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for (int i=a;i<b;i++)
const int N=1e5+2, MOD=1e9+7;

 bool vis[N];
 vi adj[N];

void dfs(int node)
{
    // preorder
    vis[node]=1;
    // cout<<node<<" ";

    // inorder
    vector<int> :: iterator it;

    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(!vis[*it])
        {
            dfs(*it);
        }
    }

//postorder
 cout<<node<<" ";


}


int main() {
    
 int n,m;
 cin>>n>>m;

rep(i,0,m)
 {
   vis[i]=0;
 }

 rep(i,0,m)
 {
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
 }

dfs(1);


}
