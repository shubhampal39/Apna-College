// https://www.geeksforgeeks.org/tiling-problem/



//friends pairing problem
#include <iostream>
using namespace std;

int no_of_ways(int n)
{
       if(n<=2) return n;
       return no_of_ways(n-1)+(n-1)*no_of_ways(n-2);
}

int main() {
  int n;
  cin>>n;
  cout<<no_of_ways(n);
  return 0;
}
