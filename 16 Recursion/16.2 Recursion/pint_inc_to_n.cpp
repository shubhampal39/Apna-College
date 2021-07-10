


#include<bits/stdc++.h>
using namespace std;
void printinc(int n)
{
if(n==0)
{
    return;
}
printinc(n-1);
cout<<n;
}

int main()
{
	int n=5;
    printinc(n);
	return 0;
}