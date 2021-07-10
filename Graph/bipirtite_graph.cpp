

//check bipiratite or not
#include <bits/stdc++.h>
using namespace std;
bool bipart=true;
vector<int> col;
vector<bool> vis;
vector<vector<int>> adj;

void color(int u,int curr,vector<vector<int>> &adj)
{
   if(col[u]!=-1 &&  col[u]!=curr)
   {
       bipart=false;
       return;
   }
  col[u]=curr;

  if(vis[u])
      return;

vis[u]=true;
for(auto i:adj[u])
{
    if(curr==0)
    {
    color(i,1,adj);  
    }
    else{
        color(i,0,adj);
    }
    //can use colr(i,curr xor i)
}
}

int main() {
  int n,m;
  cin>>n>>m;
  adj=vector<vector<int>>(n);
  vis=vector<bool>(n,false);
   col =vector<int>(n,-1);
   
  for(int i=0;i<m;i++)
  {
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
  }    

  for(int i=0;i<n;i++)
  {
      if(!vis[i])
      {
        color(i,0,adj);
      }        
  }

   if(bipart)  cout<<"graph is biapartate";
   else cout<<"graph is not biaparted";

}
