
#include <iostream>
using namespace std;
int count_no_ways_in_dice(int start,int end)
{
  if(start==end)
     return 1;
  
  if(start>end) return 0;

   int count=0;
    for(int i=1;i<=6;i++)
    {
         count+=count_no_ways_in_dice(start+i,end);
    }

    return count;
}


int main() {
 cout<<count_no_ways_in_dice(0,3);
}
