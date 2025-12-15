// #include<bits/stdc++.h>
// using namespace std;
// // 1
// /*
// 00 01 02 03 04 05 06 07 08 09
// 10 19
// 20 29
// 30 39
// 40 49 
// 50 59
// 60 69 
// 70 79 
// 80 89
// 90 91 92 93 94 95 96 97 98 99
// */
// // 2
// /*
// 11 12 13 14 15 16 17 18
// 21 28
// 31 38
// 41 48 
// 51 58
// 61 68 
// 71 78 
// 81 82 83 84 85 86 87 88 
// */

// int calScore(int row, int col, char c){
//     int bound1 =0;
//     int bound2 =9;

//     for ( int ring =1; ring<=5; ring++){
//         if ( (row==bound1) || (row==bound2) ){ return ring;}
//         else if ((col==bound1) || (col==bound2)) {return ring;}
        
//         bound1++;bound2--;
//     }
//     return 0; // fallback
    
// }
// void miniTest(){
//     int finalScore=0;
//     for (int row=0; row<10; row++){
//         for (int col=0; col<10; col++){
//             char c;
//             cin>>c;
//             if (c=='X') finalScore+=calScore(row,col,c);
//         }

//     }
//     cout<<finalScore<<"\n";
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);;
//     int t;
//     cin>>t;
//     while(t--){
//         miniTest();
//     }
//     return 0;
// }
// // Approach 1: Time complexity is O(1) per test case (100 cells × 5 rings, all constants) and space complexity is O(1).

#include<bits/stdc++.h>
using namespace std;

int calScore(int row, int col, char c){
    int top = row;
    int left = col;
    int bottom = 9- row;
    int right = 9-col;
    return min({top,bottom,left,right})+1; // fallback
    
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

// Approach 2: Time complexity is O(1) per test case (100 cells, constant work per cell) and space complexity is O(1).


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int score = 0;
//         for (int i = 0; i < 10; i++) {
//             for (int j = 0; j < 10; j++) {
//                 char c;
//                 cin >> c;
//                 if (c == 'X') {
//                     score += min({i, j, 9 - i, 9 - j}) + 1;
//                 }
//             }
//         }
//         cout << score << '\n';
//     }
// }
// // Approach 2: Time complexity is O(1) per test case (100 cells, constant work per cell) and space complexity is O(1).

// #include<bits/stdc++.h>
// using namespace std;

// // Predefined score matrix representing the target's rings
// // Each element represents the score for that position on the target
// const int score[10][10] = {
// 	{1,1,1,1,1,1,1,1,1,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,1,1,1,1,1,1,1,1,1}
// };

// int calScore(int row, int col, char c){
//     return score[row][col]; 
    
// }
// void miniTest(){
//     int finalScore=0;
//     for (int row=0; row<10; row++){
//         for (int col=0; col<10; col++){
//             char c;
//             cin>>c;
//             if (c=='X') finalScore+=calScore(row,col,c);
//         }

//     }
//     cout<<finalScore<<"\n";
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);;
//     int t;
//     cin>>t;
//     while(t--){
//         miniTest();
//     }
//     return 0;
// }

// // Time complexity is O(1) per test case (fixed 10×10 grid), and space complexity is O(1) since all data structures are of constant size