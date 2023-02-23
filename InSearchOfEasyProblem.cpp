#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0,d=0;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a==0)c++;
        else d++;
    }
    if(c==n) cout<<"EASY";
    else cout<<"HARD";
    return 0;
    
}