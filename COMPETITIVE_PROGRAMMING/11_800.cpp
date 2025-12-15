#include<bits/stdc++.h>
using namespace std;
int main()
{   long long n; cin>>n;
    long long a[n];
    for ( int i=0; i< n; i++){cin>> a[i];} //n
    long long min_ops = INT_MAX;
    for ( int i=0; i< n; i++){min_ops=min(min_ops,abs(a[i]));} //n
    cout<<min_ops;
    return 0;
}
// TC O(n)
// SC O(n)