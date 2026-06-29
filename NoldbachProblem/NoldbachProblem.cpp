#include <bits/stdc++.h>
using namespace std;
vector<int> Prime(int n){
    vector<int> prime(n+1,1);
    prime[1]=prime[0]=0;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            for(int j=i*2;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
    return prime;
}
int main(){
    int n,k;
    cin>>n>>k;
    int cnt=0;
    vector<int> prime=Prime(n);
    vector<int> primes;
    for(int i=0;i<prime.size();i++){
        if(prime[i]){
            primes.push_back(i);
        }
    }
    for(int i=0;i<primes.size()-1;i++){
        int temp = primes[i]+primes[i+1]+1;
        if(temp<=n && prime[temp]==1){
            cnt++;
        }
    }
    if(cnt>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}