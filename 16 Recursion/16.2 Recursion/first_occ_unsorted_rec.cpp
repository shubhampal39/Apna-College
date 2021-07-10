


#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int i,int n,int x)
{
if(n==i) return 0;
if(arr[i]==x)
{
return  i;
}
return firstOccurence(arr,i+1,n,x);
}

int main()
{
	int n=6;
    int arr[]={1,2,5,1,2,5};
    int x=2;
    cout<<firstOccurence(arr,0,n,x);
	return 0;
}