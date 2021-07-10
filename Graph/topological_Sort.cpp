

// Topological orerering
// topological orderering is an ordering of the nodes in a directed graph
// where for each directed edge from node A to node B node,
// A appears before node B in the orderering
// Note: Topological order are not unique .graph has many TS
// every graph has not TS
//only Directed acyclic graph have a valid toplogical sort

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for (int i=a;i<b;i++)
const int N=1e5+2, MOD=1e9+7;
//  bool vis[N];
//  vi adj[N];
// vi indegree;

int main() {
    //n=vertex m=edges
 int n,m;
 int count=0;
 cin>>n>>m;
//  vvi adj(n);
vector<vector<int>> adj(n+1);
vector <int> indegree(n);

// vi adj[N];
// rep(i,0,m)
//  {
//    vis[i]=0;
//  }

//  rep(i,0,m)
//  {
//     int u,v;
//     cin>>u>>v;
//     // cout<<u<<v<<endl;
//     adj[u].push_back(v);
//     adj[v].push_back(u);
//     // indegree[v]++;
//  }

rep(i,0,m)
{
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    indegree[y]++;
}

queue<int> pq;
rep(i,0,n)
{
    if(indegree[i]==0)
    {
        pq.push(i);
    }
}

while(!pq.empty())
{
   int x=pq.front();
   pq.pop();
   cout<<x<<endl;
   for(auto it:adj[x])
   {
       indegree[it]--;
       if(indegree[it]==0)
       {
           pq.push(it);
       }
   }

}

}
