#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int cnt1 =0,cnt2=0,cnt3=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
      cnt1++;
    } else if(s[i]=='2'){
      cnt2++;
    } else if(s[i]=='3'){
      cnt3++;
    }
  }
  string a;
  while(true){
      if(cnt1>0 && a.size()==0) {a+="1";cnt1--;}
      else if(cnt2>0 && a.size()==0) {a+="2";cnt2--;}
      else if(cnt3>0 && a.size()==0) {a+="3";cnt3--;}
      else if(cnt1>0) {a+="+1"; cnt1--;}
      else if(cnt2>0) {a+="+2"; cnt2--;}
      else if(cnt3>0) {a+="+3"; cnt3--;}
      else if(cnt1 == 0 && cnt2==0 && cnt3 == 0) break;
  }
  cout<<a<<endl;
  return 0;
}