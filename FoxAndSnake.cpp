#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<char>> cv;
    for(int i=1;i<=r;i++){
        if(i%4 == 2){
            for(int j=1;j<c;j++){
            cout<<".";
            }
            cout<<"#";
        }
        else if(i%4 == 0){
            cout<<"#";
            for(int j=1;j<c;j++){
            cout<<".";
            }
        }
        else {
            for(int j=0;j<c;j++){
            cout<<"#";
            }
        }
        cout<<endl;
    }
    
    return 0;
}