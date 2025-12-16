#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int mt=0;
    cin>>mt;
    while(mt--){
        int n=0;
        cin>>n;
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        // input done
        // main output
        vector<int> a;
        a.push_back(b[0]);
        for(int i=1; i<n; i++){
            if(b[i-1]>b[i]){
                a.push_back(b[i]);
            }
            a.push_back(b[i]);
        }
        cout<<a.size()<<"\n";
        for(int i=0;i<a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";   


    }
    return 0;
}