

#include <bits/stdc++.h>
using namespace std;

void reverse_string(string a)
{
   if(a.length()==0)
   {return;
}
  
  reverse_string(a.substr(1));
  cout<<a[0];
}

int main() {
string a="abcde";
reverse_string(a);
}
