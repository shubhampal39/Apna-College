


#include<bits/stdc++.h>
using namespace std;
int isSorted(int arr[],int n)
{

if(n==0)
{
   return true;
}

if(arr[0]>arr[1])
{
   return false;
}

return isSorted(arr+1,n-1);

}

int main()
{
	int n=5;
	int arr[]={1,2,3,4,5};
    cout<<isSorted(arr,n);
	return 0;
}