#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int DrinkPerToast = (k*l)/nl;
    int lemonsPerToast = (c*d)/1;
    int saltPerToast = (p/np);
 
 
    cout<<min(min(lemonsPerToast,saltPerToast),DrinkPerToast)/n;
}