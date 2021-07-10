


//no of component in undirected graph
#include<bits/stdc++.h>
using namespace std;

int get_component(int idx,vector<int> &visited,vector<vector<int>> &adj)
{
     if(visited[idx]) 
           return 0;
    visited[idx]=true;
    int ans=1;
    for(auto i:adj[idx])
    {
        if(!visited[i])
        {
            ans+=get_component(i,visited,adj);
            visited[i]=true;
        }
    }
    // cout<<endl;
    return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    //  bool visited[n]
    vector<int> visited(n,false);
    vector<int> component;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
  int count=0;
    for(int i=0;i<n;i++)
    {
           if(!visited[i])
           {
               int count= get_component(i,visited,adj);
               component.push_back(count);
           }
    }
    
    for(int i=0;i<component.size();i++)
    {
        cout<<component[i]<<endl;
    }


}