#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    while(n--){
        string i;
        cin>>i;
        if(i == "Tetrahedron") sum+=4;
        else if(i == "Cube") sum+=6;
        else if(i == "Octahedron") sum+=8;
        else if(i == "Dodecahedron") sum+=12;
        else sum+=20;
    }
    cout<<sum;
    return 0;
    
}