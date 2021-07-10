

#include <bits/stdc++.h>
using namespace std;

void reverse_string(string a)
{
   if(a.length()==0)
   {return;
}
  
  if(a[0]=='p' && a[1]=='i')
  {
      cout<<"3.14";
  reverse_string(a.substr(2));
  }
  else
  {
      cout<<a[0];
  reverse_string(a.substr(1));
  }

}

int main() {
string a="abcdepi";
reverse_string(a);
}
