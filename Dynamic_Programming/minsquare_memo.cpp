

//minimum number of square whose sum equal to given snumber n
// https://www.geeksforgeeks.org/minimum-number-of-squares-whose-sum-equals-to-given-number-n/
#include <iostream>
using namespace std;
const int MOD=1e9+7,N=1e5;
int  dp[N];
int minsquareSum(int n)
{

if(n==0||n==1||n==2||n==3)
    return n;

if(dp[n]!=MOD) return dp[n];
int ans=MOD;
for(int i=1;i*i<=n;i++)
{
    ans=min(ans,1+ minsquareSum(n-i*i));
    dp[n]=ans;
}

return dp[n];

}


int main() {
  int n;
  cin>>n;
 for(int i=0;i<=n;i++)
{
   dp[i]=MOD;
}
  cout<<minsquareSum(n)<<endl;


}
