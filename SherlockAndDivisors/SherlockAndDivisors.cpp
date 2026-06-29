#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n; 
        int cnt=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                int div1 = i;
                int div2=(n/i);
                if(div1%2==0) cnt++;
                if(div2%2==0 && div2!=div1) cnt++;
            }
        }
        if(n%2==0) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}