#include <bits/stdc++.h>
# define ll long long
using namespace std;

ll capa(ll c){
    ll ret = 0;
    for(ll k=2;k*k*k<=c;k++){
        ret += c/(k*k*k);
    }
    return ret;
}
int main(){
    ll n;
    cin>>n;
    ll low = 0, high = 1e9;
    ll ans = -1;
    while(low<=high){
        ll mid = low + (high-low)/2;
        ll ret = capa(mid);
        if(ret == n) ans=mid;
        if(ret<n) low=mid+1;
        else high = mid-1;
    }
    cout<<ans;
    return 0;
}