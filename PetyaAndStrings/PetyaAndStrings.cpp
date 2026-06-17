#include <bits/stdc++.h>
using namespace std;
int main(){
  string a;
  cin>>a;
  string b;
  cin>>b;
  for(int i=0;i<a.length();i++){
    if(a[i]<=96) a[i] += 32;
    if(b[i]<=96) b[i] += 32;
  }
  if(a>b) cout<<1<<endl;
  else if(a<b) cout<<-1<<endl;
  else cout<<0<<endl;
  return 0;
}