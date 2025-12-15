// // template miniTests int1 int2 vectorArrayInt1
// #include<bits/stdc++.h>
// using namespace std;
// string mainGame(int x1, int x2, vector<int> v1){
//     // code here
//     // x1 n
//     // x2 k
//     // v1 a
//     for ( int i =0; i<x1; i++ ){
//         if (x2==v1[i]) {return "YES";}
//     }
//     return "NO";
    
// }

// void eachMiniTest(){ 
//     int x1=0, x2=0;// factor1 factor2
//         cin>>x1>>x2;
//     vector<int> v1(x1);

//     for (int i=0; i<x1; i++ ) cin>>v1[i];
//     cout<< mainGame(x1,x2,v1)<<"\n";

// }

// int main(){
//     long long t; //mini test cases
//     cin>>t;
//     while(t--){
//         eachMiniTest();
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){long long n,k;cin>>n>>k;
    long long a[n];for (int i=0; i<n; i++) cin>>a[i];
    long long number_is_present =0;
    for (int i=0; i<n; i++){if (a[i]==k) {number_is_present=1;break;}}
    if(number_is_present) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}return 0;
}
// TC O(n)
// SC O(n)