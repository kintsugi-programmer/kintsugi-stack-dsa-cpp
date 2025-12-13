
// // Wrong Solution
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int cons = 0;
//         for (int i=1; i<nums.size(); i++){
//             if (nums[i]-nums[i-1]==1){cons++;}
//         }
//         return cons+1;// +1 as we want nos. not number of differences (i.e. at for loop we started with 1 :) )
//     }
// };

// // Wrong Solution
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.size()==0){return 0;}
//         sort(nums.begin(),nums.end());
//         int cons = 0;
//         for (int i=1; i<nums.size(); i++){
//             if (nums[i]-nums[i-1]==1){cons++;}
//         }
//         return cons+1;// +1 as we want nos. not number of differences (i.e. at for loop we started with 1 :) )
//     }
// };

// // Wrong Solution
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.size()==0){return 0;}
//         sort(nums.begin(),nums.end());
//         int cons = 0;
//         for (int i=1; i<nums.size(); i++){
//             if (abs(nums[i])-abs(nums[i-1])==1){cons++;}
//         }
//         return cons+1;// +1 as we want nos. not number of differences (i.e. at for loop we started with 1 :) )
//     }
// };

// // Wrong Solution
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.size()==0){return 0;}
//         sort(nums.begin(),nums.end());
//         int cons = 0;
//         for (int i=1; i<nums.size(); i++){
//             if (abs(abs(nums[i])-abs(nums[i-1]))==1){cons++;}
//         }
//         return cons+1;// +1 as we want nos. not number of differences (i.e. at for loop we started with 1 :) )
//     }
// };

// // Wrong Solution
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.size()==0){return 0;}
//         sort(nums.begin(),nums.end());
//         int cons = 0;
//         vector<int> con;
//         for (int i=1; i<nums.size(); i++){
//             if (nums[i]-nums[i-1]==1){cons++;}
//             if (nums[i]-nums[i-1]>1){con.push_back(cons);cons=0;}
//         }
//         sort(con.rbegin(),con.rend());
//         if(con.size()==0){return cons+1;}// either there is null in the name of consecutive, or array must be blanck because array was never filled at case of only one sub array all done in 1st if check
//         return con[0]+1;// +1 as we want nos. not number of differences (i.e. at for loop we started with 1 :) )
//     }
// };

// // Wrong Solution
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.size()==0){return 0;}
//         // vector<int> diff;
//         sort(nums.begin(),nums.end());
//         unordered_map<int,int> freq;
//         for ( int i=1; i<nums.size(); i++){
//             // diff.push_back(nums[i]-nums[i-1]);
//             freq[nums[i]-nums[i-1]]++;
//         };
//         return freq[1]+1;
//     }
// };

