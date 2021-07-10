

//0/1 Knapsack problem
#include <bits/stdc++.h>
using namespace std;
int max_profit(int p[],int w[], int W,int n)
{
    if(n<0||W==0)
    {
        return 0;
    }

if(W<w[n])
{
   return  max_profit(p,w,W,n-1);
}

return max(max_profit(p,w,W,n-1),max_profit(p,w,W-w[n],n-1)+p[n]);
}

int main() {
  int val[] = { 100,50,150 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
  cout<<max_profit(val,wt,W,n-1);
  return 0;
}
