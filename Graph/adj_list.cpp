


undirected graph represented by adjacency list
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for (int i=a;i<b;i++)
const int N=1e5+2, MOD=1e9+7;

int main() {

vi adj[N];

    int n,m;

cin>>n>>m;
rep(i,0,m)
{
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}

rep(i,1,n+1)
{
    cout<<i<<"->";
    for(int x:adj[i])
    {
        cout<<x<<" ";
    }
    cout<<endl;
}

}
