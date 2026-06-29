#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long x = v[0]*v[n-1];
        vector<long long> b;
        for(long long i = 2;i*i<=x;i++){
            if(x%i==0){
                b.push_back(i);
                if(x/i!=i){
                    b.push_back(x/i);
                }
            }
        }
        sort(b.begin(),b.end());
        if(v==b) cout<<x<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}