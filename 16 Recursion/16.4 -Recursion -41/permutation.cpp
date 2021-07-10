


#include <iostream>
using namespace std;
void permutation(string s,string a)
{
    if(s.length()==0)
    {
        cout<<a<<endl;
        return;
    }

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,a+ch);
    }
}


int main() {
   string s="ABC";
   permutation(s,"");
}
