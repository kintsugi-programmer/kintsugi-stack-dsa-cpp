// // Solution 1
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string ss ="";
//         for (int i=0; i<s.size(); i++){
//             if (
//                 // s[i]!=' ' 
//                 // && 
//                     // ( 
//                         (s[i]>=97 && s[i]<= 122) // a to z check
//                         // NO to s[i]>=97 || s[i]<= 122 as it's logically incorrect and char bypass the check 
//                     || 
//                         (s[i]>=65 && s[i]<= 90) // A to Z check
//                         // && instead of ||
//                     // ) 
//                 )
//                 {
//                 ss+=tolower(s[i]);
//             }
//             else if (s[i]>=48 && s[i]<= 57){
//                                         // && instead of ||
//                 ss+=s[i]; // nos
//             }
//         }
//         // int half = ss.size()%2 == 0 ? (ss.size()/2) : ((ss.size()/2));
//         int half = ss.size() / 2 ;
//         for (int i=0; i<half; i++){
//             if(ss[i]!=ss[ss.size()-1-i]) return false; // remember ss.size()-1 is last index, not ss.size()
//         }

//         // if (ss.size%2==0){ //even alphanumeric chars

//         // }
//         // else if (ss.size%2==0){ //odd alphanumeric chars

//         // }
//         return true;
//     }
// };

// //   - Time Complexity (TC)
// //     - O(n)
// //       - One pass to filter characters
// //       - One pass to compare palindrome
// //   - Space Complexity (SC)
// //     - O(n)
// //       - Extra string used to store alphanumeric characters


// // Solution 1
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string ss ="";
//         for (int i=0; i<s.size(); i++){
//             if (
//                 isalnum(s[i]) //`isalnum()` checks if char is alphanumeric
//                 )
//                 {
//                 ss+=tolower(s[i]);
//             }
//         }
//         // int half = ss.size()%2 == 0 ? (ss.size()/2) : ((ss.size()/2));
//         int half = ss.size() / 2 ;
//         for (int i=0; i<half; i++){
//             if(ss[i]!=ss[ss.size()-1-i]) return false; // remember ss.size()-1 is last index, not ss.size()
//         }

//         // if (ss.size%2==0){ //even alphanumeric chars

//         // }
//         // else if (ss.size%2==0){ //odd alphanumeric chars

//         // }
//         return true;
//     }
// };

// //   - Time Complexity (TC)
// //     - O(n)
// //       - One pass to filter characters
// //       - One pass to compare palindrome
// //   - Space Complexity (SC)
// //     - O(n)
// //       - Extra string used to store alphanumeric characters


// // Solution 2
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string ss ="";
//         for (int i=0; i<s.size(); i++){if (isalnum(s[i])) ss+=tolower(s[i]);}
//         string rss = ss;
//         reverse(rss.begin(),rss.end());
//         for (int i=0; i<ss.size(); i++){if ( ss[i] != rss[i]) return false;}
//         return true;
//     }
// };
// //   - Time Complexity (TC)
// //     - O(n)
// //   - Space Complexity (SC)
// //     - O(n)
