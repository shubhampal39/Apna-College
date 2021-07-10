

//Generate all substring of string with ASCII
#include <iostream>
using namespace std;
string keypadARR[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void KeyPad(string s,string ans)
{
    if(s.length()==0)
      {
          cout<<ans<<endl; return;
      }

      char ch=s[0];
      string code=keypadARR[ch-'0'];
      string ros=s.substr(1);

      for(int i=0;i<code.length();i++)
      {
          KeyPad(ros,ans+code[i]);
      }
    
}

int main() {
   KeyPad("23","");
}
