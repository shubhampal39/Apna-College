#include <iostream>
using namespace std;
//REMOVE DUPLICATE FROM CONTINUS CHARCHARTER(MEAN SORTED CHARACTED STRING)
string removeduplicate(string s)
{
     if(s.length()==0) return "";
     
     char ch=s[0];

     string ans=removeduplicate(s.substr(1));

     if(ch==ans[0])
     {
         return ans;
     }

     return (ch+ans);
}

int main() {
    string s="AABBBBBBCCCCCCCEEEEEEEE";
   cout<<removeduplicate(s);
}
