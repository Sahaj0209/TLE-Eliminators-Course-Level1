#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    string flag = "YES";
    if(s.size()!=t.size()) flag ="NO";
    for(int i=0;i<min(s.size(),t.size());i++){
        int j = t.size()-i-1;
        if(s[i]!=t[j]){
            flag = "NO";
            break;
        }
    }
    cout<<flag<<endl;
    return 0;
}