#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        ll cnt = 0;
        ll n = x;
        for(ll i = 2;i*i<=n;i++){
            while(x%i==0){
                cnt++;
                x/=i;
            }
        }
        if(x>1) cnt++;
        cout<<(cnt>=k)<<endl;
    }
    return 0;
}