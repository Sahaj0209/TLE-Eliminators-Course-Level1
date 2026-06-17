#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b="";
    for(int i=0;i<a.size();i++){
        if(!(a[i]=='A'||a[i]=='O'||a[i]=='Y'||a[i]=='E'||a[i]=='U'||a[i]=='I'||a[i]=='a'||a[i]=='o'||a[i]=='y'||a[i]=='e'||a[i]=='u'||a[i]=='i')){
            a[i]=tolower(a[i]);
            b=b+"."+a[i];
        }
    }
    cout<<b<<endl;
    return 0;
}
// "A", "O", "Y", "E", "U", "I"