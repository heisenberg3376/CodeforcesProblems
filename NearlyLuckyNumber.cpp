#include <bits/stdc++.h>
using namespace std;
int main(){
    int c=0;
    string n;
    cin >>n;
    for(auto i:n){
        if(i=='4' || i=='7') c++;
    }
    if(c==4 || c==7)cout<<"YES";
    else cout<<"NO";
    return 0;
}