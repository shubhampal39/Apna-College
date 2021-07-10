

// BFS
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for (int i=a;i<b;i++)
const int N=1e5+2, MOD=1e9+7;

int main() {
    
 vi adj[N];
 bool vis[N];
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

queue<int> q;
q.push(1);
vis[1]=true;
while(!q.empty())
{
    int x=q.front();
    cout<<x<<endl;
    q.pop();

  vector<int> :: iterator it;
  for(it=adj[x].begin();it!=adj[x].end();it++)
  {
      if(!vis[*it])
      {
          vis[*it]=1;
          q.push(*it);
      }
  }
    // for(int a:adj[x])
    // {
    //     if(!vis[a])
    //     {
    //         vis[a]=true;
    //         q.push(a);
    //     }
    // }
}

}
