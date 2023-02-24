#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
 
int main(){
    ll t,n,h;
    cin>>t;
    while (t--){
        cin>>n>>h;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        ll low=1, high=h;
        while(low<= high){
            ll mid = low + (high-low)/2;
            ll damage = 0;
            for(int i=0;i<n-1;i++)
            damage+=(v[i]+mid>v[i+1]?v[i+1]-v[i]:mid);
            
            damage+= mid;
            if(damage >=h)high=mid-1;
            else low = mid+1;
        }
        cout<<low<<endl;
    }
    return 0;
}