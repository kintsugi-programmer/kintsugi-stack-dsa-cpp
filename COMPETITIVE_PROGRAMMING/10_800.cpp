#include<bits/stdc++.h>
using namespace std;

// Predefined score matrix representing the target's rings
// Each element represents the score for that position on the target
const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int calScore(int row, int col, char c){
    return score[row][col]; 
    
}
void miniTest(){
    int finalScore=0;
    for (int row=0; row<10; row++){
        for (int col=0; col<10; col++){
            char c;
            cin>>c;
            if (c=='X') finalScore+=calScore(row,col,c);
        }

    }
    cout<<finalScore<<"\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);;
    int t;
    cin>>t;
    while(t--){
        miniTest();
    }
    return 0;
}

// Time complexity is O(1) per test case (fixed 10×10 grid), and space complexity is O(1) since all data structures are of constant size