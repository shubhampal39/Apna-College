


#include<bits/stdc++.h>
using namespace std;
int lastOccurence(int arr[],int n,int x)
{
if(n==0) return -1;

if(arr[n]==x)
{
return  n;
}
return lastOccurence(arr,n-1,x);
}

int main()
{
	int n=8;
    int arr[]={1,2,5,1,2,5,2,6};
    int x=2;
    cout<<lastOccurence(arr,n,x);
	return 0;
}