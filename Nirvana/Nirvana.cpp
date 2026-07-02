#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll prod(ll n){
    ll prod=1;
    while(n>0){
        ll rem = n%10;
        prod*=rem;
        n/=10;
    }
    return prod;
}
int main(){
    ll n,p=1;
    cin>>n;
    ll ans=prod(n);
        while(n!=0){
        ans=max(ans,prod(n*p-1));
        n/=10;
        p*=10;
    }
    cout<<ans<<endl;
    return 0;
}