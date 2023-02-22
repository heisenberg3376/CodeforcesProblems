#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    for(int i=0;i<n.size();i++){
        if(i==0 and n[i]=='9') continue;
        else if(n[i]>'4' and n[i]<='9') n[i] = '9'-n[i] + '0';
    }
    cout<<n;
    return 0;
}