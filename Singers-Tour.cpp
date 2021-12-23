#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
//solve by codeExplainer
//commented by Mello
 
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>ans(n);
    ll total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    ll sum = (n*(n+1))/2; //for n numbers, this is sum that multiplies a_1+ a_2+...+a_n
    if(total%sum){ //if not a multiple of sum
        cout<<"NO"<<"\n";
        return;
    }
    total/=sum; //total will be divided, and we get a_1+a_2+...
    for(int i=0;i<n;i++){
        ll diff = a[i]-a[(n-1+i)%n]; 
        diff=total-diff; //observe that now, total is a_1+a_2+...
        if(diff<=0 || (diff%n)){//if diff is not positive or if it's a multiple of n
            cout<<"NO"<<"\n";
            return;
        }
        diff/=n;
        ans[i]=diff; //for each ans I associate a diff
    }
    cout<<"YES"<<"\n";
    for(auto i : ans) cout<<i<<" "; //this 'i' is the repertoire's duration
    cout<<"\n";
    
    
}
                
int main(){
   
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}
 
