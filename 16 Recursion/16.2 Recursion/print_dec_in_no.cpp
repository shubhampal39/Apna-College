


#include<bits/stdc++.h>
using namespace std;
void printdec(int n)
{
if(n==0)
{
    return;
}
cout<<n;
printdec(n-1);
}

int main()
{
	int n=5;
    printdec(n);
	return 0;
}