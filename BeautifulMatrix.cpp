#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[6][6],r,c,i,j;
    for(i=1;i<6;i++){
        for(j=1;j<6;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                r = abs(3-i);
                c = abs(3-j);
            }
        }
    }
    cout<<(r+c);
    return 0;
}
