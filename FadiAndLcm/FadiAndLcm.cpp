#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll LCM(ll a, ll b){
    return (a/gcd(a,b))*b;
}
int main(){
    ll x;cin>>x;
    vector<ll> fac;
    ll temp = x;
    for(ll i = 2;i*i<=x;i++){
        if(x%i==0){
            fac.push_back(i);
            if(x/i!=i){
                fac.push_back(x/i);
            }
        }
    }
    if(x>1) fac.push_back(x);
    fac.push_back(1);
    ll Min = LLONG_MAX;
    for(ll i=0;i<fac.size();i++){
        ll lcm = LCM(fac[i],temp/fac[i]);
        if(lcm==temp){
        Min = min(max(fac[i],temp/fac[i]),Min);
        }
    }
    if(temp==1) Min=1;
    cout<<Min<<" "<<temp/Min<<endl;
    return 0;
}