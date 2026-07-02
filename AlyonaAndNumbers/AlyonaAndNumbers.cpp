#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    ll cnt = 0;
    ll a[5]={0},b[5]={0};
    for(ll i =1;i<=n;i++){
        a[i%5]++;
    }
    for(ll  i = 1;i<=m;i++){
        b[i%5]++;
    }
    cnt=(a[0]*b[0])+(a[1]*b[4])+(a[2]*b[3])+(a[3]*b[2])+(a[4]*b[1]);
    cout<<cnt<<endl;
    return 0;
}