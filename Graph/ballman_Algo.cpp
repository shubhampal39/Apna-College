

//bellman ford 
#include <bits/stdc++.h>
using namespace std;
const int INF=1e7;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> dist(n,INF);
    vector<vector<int>> edges;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    } 

    int source;
    cin>>source;
    dist[source]=0;

  for(int iter=0;iter<n-1;iter++)
  {
      for(auto e:edges)
      {
          int u=e[0];
          int v=e[1];
          int w=e[2];
          dist[v]=min(dist[v],w+dist[u]);

      }
  }

for(int i:dist)
{
    cout<<i<<" ";
}

}
