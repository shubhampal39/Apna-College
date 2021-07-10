

#include <iostream>
using namespace std;

void tower_of_honai(int n,char src,char des,char helper)
{
    if(n==0) return;
   tower_of_honai(n-1,src,helper,des);
    cout<<"move from "<<src<<"to"<<des<<endl;
   tower_of_honai(n-1,helper,des,src);
}

int main() {
    tower_of_honai(3,'A','C','B');
    return 0;
}
