#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,k;
    cin>>n>>k;
    vector<int> ans;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            ans.push_back(i);
            n /= i;
        }
    }
    if(n > 1) ans.push_back(n);
    if(ans.size()<k) cout<<-1;
    else {
        int i=0;
        while(k-1>0){
            cout<<ans[i]<<" ";
            ans[i]=1;
            i++;k--;
        }
        int prod = 1;
        for(int i=0;i<ans.size();i++){
            prod*=ans[i];
        }
        cout<<prod<<" ";
    }
    return 0;
}