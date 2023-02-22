#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0,i;
    string s;
    cin >> n;
    for (i=0;i<n;i++){
        cin >> s;
        // middle char will always be + for addition 
        if(s[1]=='+'){
            x++;
        }
        // it will be - for subtraction
        else x--;
    }
    cout<<x;
    return 0;
}