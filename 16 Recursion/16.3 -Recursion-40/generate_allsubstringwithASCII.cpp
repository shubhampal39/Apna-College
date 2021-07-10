

//Generate all substring of string with ASCII
#include <iostream>
using namespace std;
void findallsubstrijngwithASCII(string s,string ans)
{
    if(s.length()==0) {
        cout<<ans<<endl;
    return;
    }

    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    findallsubstrijngwithASCII(ros,ans);   //not include 
    findallsubstrijngwithASCII(ros,ans+ch); //include
    findallsubstrijngwithASCII(ros,ans+to_string(code)); //include


}

int main() {
    string s="AB";
    string ans="";
   findallsubstrijngwithASCII(s,ans);
}
