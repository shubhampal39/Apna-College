

//Generate all substring of string
#include <iostream>
using namespace std;
void findallsubstrijng(string s,string ans)
{
    if(s.length()==0) {
        cout<<ans<<endl;
    return;
    }

    char ch=s[0];
    string ros=s.substr(1);
    findallsubstrijng(ros,ans);   //not include 
    findallsubstrijng(ros,ans+ch); //include

}

int main() {
    string s="ABC";
    string ans="";
   findallsubstrijng(s,ans);
}
