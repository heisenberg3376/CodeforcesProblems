#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
 

ll sum( ll n){
    return (n*(n+1))/2;
}

int main(){
    ll n,k;
    cin>>n>>k;
    ll s = sum(k-1);
    if(s<n-1) cout<<-1;
    else{
        ll low=0,high=k-1;
        while(low<=high){
            ll mid = low+(high-low)/2;
            ll s1=sum(mid);
            if(s-s1 >= n-1) low=mid+1;
            else high=mid-1;
        }
        cout<<k-1-high;
    }
    
    return 0;
}