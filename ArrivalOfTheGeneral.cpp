#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max_index,min_index;
    int max_val=INT_MIN,min_val=INT_MAX;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a>max_val){
            max_val = a;
            max_index = i;
        }
        if(a<=min_val){
            min_val = a;
            min_index = i;
        }
    }
    if(max_index>min_index){
        cout<<(max_index-1)+abs(min_index-n)-1;
    }
    else cout<<(((max_index-1)+abs(min_index-n)));
    return 0;
    
}
