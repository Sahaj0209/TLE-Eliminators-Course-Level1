#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<long long> prime(100001,1);
    prime[0]=prime[1]=0;
    for(long long i=2;i<100001;i++){
        if(prime[i]){
            for(long long j=i*i;j<100001;j+=i){
                prime[j]=0;
            }
        }
    }
    vector<long long> Primes;
    for(long long i =0;i<prime.size();i++){
        if(prime[i]) Primes.push_back(i);
    }
    while(t--){
        long long d;
        cin>>d;
        long long p=-1;
        for(long long i = 0;i<Primes.size();i++){
            if(Primes[i]>=1+d){
                p=Primes[i];
                break;
            }
        }
        long long q=-1;
        for(long long i=0;i<Primes.size();i++){
            if(Primes[i]>=p+d){
                q=Primes[i];
                break;
            }
        }
        long long ans = min(p*q,p*p*p);
        cout<<ans<<endl;
    }
    return 0;
}