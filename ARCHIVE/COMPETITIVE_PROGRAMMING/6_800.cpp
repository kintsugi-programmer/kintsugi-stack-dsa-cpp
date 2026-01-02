// #include<bits/stdc++.h>
// using namespace std;
// string goodAPCheck(int x){
//     vector<int> v1(x);
//     for ( int i=0; i<x; i++) cin>>v1[i];
//     vector<int> v2=v1;
//     sort(v2.begin(),v2.end());

//     vector<int> v3=v2;
//     // remove duplicates
//     v3.erase(unique(v3.begin(),v3.end()),v3.end());
//     if (v3.size()>2 ) return "NO";
    
//     if (count(v1.begin(), v1.end(),v2[0])==x) return "YES";
//     if (x%2==0 && count(v1.begin(), v1.end(),v2[0])==count(v1.begin(), v1.end(),v2[x-1])) return "YES";
//     if(x%2!=0 && (count(v1.begin(), v1.end(),v2[0])==count(v1.begin(), v1.end(),v2[x-1])+1 ||count(v1.begin(), v1.end(),v2[0])+1==count(v1.begin(), v1.end(),v2[x-1])  )) return "YES";
//     if(x==2) return "YES";
//     else return "NO";



// }
// int main(){

//     long long t;
//     cin>>t;
//     while(t--) {
//         int x = 0;
//         cin>>x;
//         cout<<goodAPCheck(x)<<"\n";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){

    // t
    // mini tests
    int t;
    cin>> t;
    while (t--){
        long long n;
        cin>>n;
        vector<long long> a(n,0);
        // vector input
        for (long long i=0; i<n; i++) {cin>>a[i];} //n
        
        // freq map
        map<long long, long long> freq_map;
        for (long long i =0; i<n; i++){//n
            freq_map[a[i]]++;//logn
        }
        //nlogn
        

        if (freq_map.size()>=3) cout<<"No"<<endl;
        else {

            // begin- first element
            // rbegin- last element

            long long freq1 = freq_map.begin()->second;
            long long freq2 = freq_map.rbegin()->second;

            //odd size array
            if (freq1==freq2) cout<<"Yes"<<endl;
            else if ( n%2 ==1 && abs(freq1-freq2)==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}

// TC O(nlog2n) = O(100*log2(100)) = O(100*7) = O(700)
// SC O(n+n)= O(2n) = O(200)

// this problem is imp to teach map,begin,rbegin iterators