#include <bits/stdc++.h>
using namespace std;
vector<int> prime(int n){
    vector<int> v(n+1);
    v[0]=v[1]=0;
    for(int i=2;i<=n;i++){
        if(v[i]!=0){
            for(int j=i*2;j*j<=n;j+=i){
                v[j]=0;
            }
        }
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    int l = 4;
    int r = n;
    vector<int> v = prime(n);
    while(v[l]==1 && v[r-l]==1){
        l++;
        r--;
    }
    cout<<r<<" "<<l<<endl;
    return 0;
}