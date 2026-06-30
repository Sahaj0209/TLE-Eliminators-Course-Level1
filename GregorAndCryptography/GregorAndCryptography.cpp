#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long p;
        cin>>p;
        if(p%2==0){
            cout<<2<<" "<<p<<endl;
        } else {
            cout<<2<<" "<<p-1<<endl;
        }
    }
    return 0;
}