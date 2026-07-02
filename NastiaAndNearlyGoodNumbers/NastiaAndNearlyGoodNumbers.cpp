#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        if(b==1) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            if(b==2){
                cout<<a<<" "<<3*a<<" "<<4*a<<endl;
            } else {
                cout<<a<<" "<<(b-1)*a<<" "<<a*b<<endl;
            }
        }
    }
    return 0;
}