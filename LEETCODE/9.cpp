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

// // Solution 1 -- brute force

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int res=0; // max streak length
//         unordered_set<int> store(nums.begin(),nums.end());// set with O(1) lookups
//         for (int num: nums){ // traverse
//             int streak =0;//streak
//             int curr = num; // current num
//             while(store.find(curr) != store.end()){ // if number existe in set
//                 // if yes
//                 streak++; // inc streak
//                 curr++; // let curr=cur+1, move to next
//             }
//             res = max(res,streak);// check with max

//         }
//         return res;

//     }
// };
// // Time & Space Complexity
// //     Time complexity: O(n2)O(n2)
// //     Space complexity: O(n)O(n)

// // Solution 2
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.size()==0) return 0;
//         sort(nums.begin(),nums.end());
//         int 
//         res = 0,
//         curr = nums[0],
//         streak = 0,
//         i = 0;

//         while ( i<nums.size()){
//             if(curr!=nums[i]){
//                 curr=nums[i];
//                 streak=0;
//             }
//             while(
//                 i<nums.size()
//                 &&
//                 nums[i] == curr
//             ){i++;}
//             streak++;
//             curr++;
//             res=max(res,streak);


//         }return res;

//     }
// };
// // Time & Space Complexity

// //     Time complexity: O(nlog⁡n)O(nlogn)
// //     Space complexity: O(1)O(1) or O(n)O(n) depending on the sorting algorithm.

// // Solution 3
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_set<int> numSet(nums.begin(), nums.end());
//         int longest=0;
//         for (int num: nums){
//             if (numSet.find(num-1) == numSet.end()){
//                 int length = 1;

//                 while(numSet.find(num+length)!=numSet.end()){
//                     length++;
//                 }

//                 longest = max(longest, length);
//             }
//         }
//         return longest;
//     }
// };

// // Time & Space Complexity

// //     Time complexity: O(n)O(n)
// //     Space complexity: O(n)O(n)
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         // Store all numbers in a hash set for O(1) lookup
//         unordered_set<int> numSet(nums.begin(), nums.end());

//         int longest = 0;  // stores the maximum consecutive sequence length

//         // Iterate through each unique number in the set
//         for (int num : numSet) {

//             // Check if this number is the START of a sequence
//             // A number is a start only if (num - 1) does not exist
//             if (numSet.find(num - 1) == numSet.end()) {

//                 int length = 1;  // current sequence length starts at 1

//                 // Extend the sequence forward as long as consecutive numbers exist
//                 while (numSet.find(num + length) != numSet.end()) {
//                     length++;
//                 }

//                 // Update the longest sequence found so far
//                 longest = max(longest, length);
//             }
//         }

//         // Return the length of the longest consecutive sequence
//         return longest;
//     }
// };

// // Time & Space Complexity

// //     Time complexity: O(n)O(n)
// //     Space complexity: O(n)O(n)

// Solution 4
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res=0;
        for (int i=0; i<nums.size(); i++){
            int num = nums[i];
            if (!mp[num]){
                mp[num] = mp[num - 1] + mp[num + 1] + 1;
                mp[num - mp[num - 1]] = mp[num];
                mp[num + mp[num + 1]] = mp[num];
                res = max(res, mp[num]);
            }
        }
        return res;
    }
};
// Time & Space Complexity

//     Time complexity: O(n)O(n)
//     Space complexity: O(n)O(n)

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         // Hash map that stores the length of consecutive sequences
//         // Only meaningful at sequence boundaries
//         unordered_map<int, int> mp;

//         int res = 0;  // stores the longest sequence length

//         for (int num : nums) {

//             // If num already exists, skip it (avoids duplicates)
//             if (mp[num]) continue;

//             // Length of sequence ending just before num
//             int left = mp[num - 1];

//             // Length of sequence starting just after num
//             int right = mp[num + 1];

//             // New sequence length after inserting num
//             int len = left + right + 1;

//             // Store the sequence length for current number
//             mp[num] = len;

//             // Update the LEFT boundary of the merged sequence
//             mp[num - left] = len;

//             // Update the RIGHT boundary of the merged sequence
//             mp[num + right] = len;

//             // Update the global maximum
//             res = max(res, len);
//         }

//         return res;
//     }
// };
// // Time & Space Complexity

// //     Time complexity: O(n)O(n)
// //     Space complexity: O(n)O(n)
