#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
bool check(ll cnt,vector <int> &a,vector<int> &b, ll k){
    for(int i=0;i<a.size();i++){
        ll need = cnt*a[i];
        if(b[i]<need) k-= need-b[i];
        
    }
    if(k<0)return false;
    return true;
}
 
 
int main(){
    ll n,k;
    cin >>n>>k;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll low = 0,high = 1e9;
    while(low<=high){
        ll mid = (high+low)/2;
        if(check(mid,a,b,k)) low = mid+1;
        else high = mid-1;
    }
    cout<<low-1;
    return 0;
}
