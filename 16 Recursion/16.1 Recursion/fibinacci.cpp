


#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{

     if(n<2) return n;  //when n==0 and 1 print that no

    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
	int n;
	cin>>n;
    cout<<fibonacci(n);
	return 0;
}