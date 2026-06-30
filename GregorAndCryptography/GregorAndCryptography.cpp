#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long p;
        cin>>p;
        long long a,b,c;
        a=p%2;
        b=p%3,c=p%4;
        if(a==b) cout<<2<<" "<<3<<endl;
        else if(a==c) cout<<2<<" "<<4<<endl;
        else cout<<3<<" "<<4<<endl;
    }
    return 0;
}