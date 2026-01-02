// #include<bits/stdc++.h>
// using namespace std;
// bool check(string s,string x)
// {
//     if (x.size()<s.size()) return false;
//     for (int i=0; i<x.size()- s.size()+1; i++) if (x.substr(i,s.size())==s) return true; //x.substr(i,s.size())==s substring extract
//     return false;
// }// O((n-m+1)*m)=O(n*m) 
// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//         long long n,m;
//         cin>>n>>m;
//         string x,s;
//         cin>>x>>s;

//         string x0 = x;
//         string x1 = x0+x0;
//         string x2 = x1+x1;
//         string x3 = x2+x2;
//         string x4 = x3+x3;
//         string x5 = x4+x4;

//         long long ans = -1;
//         if(check(s,x0)) ans=0;
//         else if (check(s,x1)) ans=1;
//         else if (check(s,x2)) ans=2;
//         else if (check(s,x3)) ans=3;
//         else if (check(s,x4)) ans=4;
//         else if (check(s,x5)) ans=5;
//         cout<<ans<<endl;



//     }return 0;
// }
// //187 ms	100 KB
// // TC O(2^5 *n*m) = O(32*n*m)
// // SC O(2^5*n) = O(32*n)

#include<bits/stdc++.h>
using namespace std;
int checkCount(string x,string s){
    int counter = 0;
    
    while (counter<=5){
        if ((x).find(s) != string::npos){
            return counter;
        }
        counter++;
        x=x+x;

        
    }
    return -1;

};

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n=0, m=0;
        string x="",s="";
        cin>>n>>m>>x>>s;
        
        // if ((s+s).find(x) == string::npos){
        //     cout<<-1<<"\n";
        // }
        // else{
            cout<<checkCount(x,s)<<"\n";
        // }


    }

    return 0;
}

// passed 58 tests containing test cases :)
// 109 ms	100 KB