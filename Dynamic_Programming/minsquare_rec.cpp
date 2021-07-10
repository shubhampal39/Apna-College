

//minimum number of square whose sum equal to given snumber n
// https://www.geeksforgeeks.org/minimum-number-of-squares-whose-sum-equals-to-given-number-n/
#include <iostream>
using namespace std;
const int MOD=1e9+7;

int minsquareSum(int n)
{

if(n==0||n==1||n==2||n==3)
    return n;

int ans=MOD;
for(int i=1;i*i<=n;i++)
{
    ans=min(ans,1+ minsquareSum(n-i*i));
}

return ans;

}


int main() {
  int n;
  cin>>n;
  cout<<minsquareSum(n)<<endl;


}
