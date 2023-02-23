#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,cur=0,cap=0;
    for(int i=1;i<=n;i++){
        cin >>a;
        cin >>b;
        cur = cur-a;
        cur = cur+b;
        if(cur>cap) cap = cur;
    }
    cout<<cap;
    return 0;
}