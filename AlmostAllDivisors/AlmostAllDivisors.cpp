#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        set<int> st;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v[i]=temp;
            st.insert(temp);
        }
        sort(v.begin(),v.end());
        if(v.size()==1) cout<<(v[0]*v[0])<<endl;
        int prod = v[0]*v[1];
        int j=2,k=3;
        while(!(st.find(prod)!=st.end())){
            prod=min(v[k]*v[j],prod);
            j++;k++;
        }
        cout<<prod<<endl;
    }
    return 0;
}