


//find no of ways in maze which n*n matrix
#include <iostream>
using namespace std;
int count_no_ways_in_maze(int start,int end,int n)
{
  if(start==n-1 && end==n-1) return 1;
  
  if(start>=n || end>=n) return 0;

 return count_no_ways_in_maze(start+1,end,n)+count_no_ways_in_maze(start,end+1,n);
}


int main() {
 cout<<count_no_ways_in_maze(0,0,3);
}
