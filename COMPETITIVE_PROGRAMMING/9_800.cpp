#include<bits/stdc++.h>
using namespace std;
int main(){
    // Read Question and Analyse it Bit-by-bit 
    // write all pts in depth, leave no missing dots
    // then dots will connect easily and will give you answer
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=0;// safe ,no to garbage entry
    cin>>t;
    while(t--){
        int n=0;// safe ,no to garbage entry
        cin>>n;
        n--; // we have n-1 entries
        int res=0;// safe ,no to garbage entry
        while(n--){
            int buff=0;// safe ,no to garbage entry
            cin>>buff;
            res+=buff;
        }
        res=res*(-1);
        cout<<res<<"\n";

    }
    return 0;
}