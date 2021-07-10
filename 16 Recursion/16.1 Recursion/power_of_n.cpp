


#include<bits/stdc++.h>
using namespace std;
int findPower(int p,int n)
{

  if(n==0) return 1;
//  cout<<n;
    return p*findPower(p,n-1);
}

int main()
{
	int p,n;
	cin>>p>>n;
    cout<<findPower(p,n);
	return 0;
}