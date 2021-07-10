


#include<bits/stdc++.h>
using namespace std;
int findSum(int a)
{
if(a==0) return 0;

return a+findSum(a-1);
}

int main()
{
	int a;
	cin>>a;
    cout<<findSum(a);
	// cout<<a+b;
	return 0;
}