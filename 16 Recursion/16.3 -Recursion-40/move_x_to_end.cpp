
//move all x to the end of string
#include <iostream>
using namespace std;
string removeduplicate(string s,char x)
{
     if(s.length()==0) return "";
     char ch=s[0];
     string ans=removeduplicate(s.substr(1),x);
     if(ch==x)
     {
         return ans+ch;
     }
     return (ch+ans);
}

int main() {
    string s="AABBBxBBBxCCxCCCCCExEEEEEEE";
    char x='x';
   cout<<removeduplicate(s,x);
}
