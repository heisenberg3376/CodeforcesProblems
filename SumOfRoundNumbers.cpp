#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector <int> v;
        int n;
        cin>>n;
        int p = 1;
        while(n){
            if(n%10){
                v.push_back((n%10)*p);
            }
            n=n/10, p*=10;
            
        }
        cout<<v.size()<<endl;
        for (int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}