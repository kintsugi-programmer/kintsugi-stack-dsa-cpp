// Solution 1 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prod(nums.size());
        for (int i=0; i<nums.size(); i++){
            int buff =1;
            for (int j=0; j<nums.size(); j++){
                if(j!=i){
                    buff*=nums[j];
                }
            }
            prod[i]=buff;
        }
        return prod;
    }
};

// Time & Space Complexity
// Time complexity: 
// O(n^2)
// Space complexity:
//     O(1) extra space.
//     O(n) space for the output array.

// Ilegal Solution 2
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prod(nums.size());
        int totalProd= 1;
        int containZero = 0;
        int containNums = 0; 
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0) {containZero+=1;}
            if (nums[i]!=0) {totalProd*= nums[i];containNums =1;}
        }
        for (int i=0; i<nums.size(); i++){
            if ( containNums ==1 ){
            if (containZero==1){
                if (nums[i]==0){ prod[i]=totalProd;}
                }
            if (containZero==0){
                prod[i]=totalProd/nums[i];
                }
            }
            
        }
        return prod;
    }
};

// Time & Space Complexity
// Time complexity: 
// O(n)
// Space complexity:
//     O(1) extra space.
//     O(n) space for the output array.

// Solution 3
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        vector<int> pre(nums.size());
        vector<int> suff(nums.size());
        pre[0]=nums[0];
        for ( int i=1; i<nums.size(); i++ ){ 
            pre[i]=nums[i]*pre[i-1];   
        }
        suff[nums.size()-1]=nums[nums.size()-1];
        for ( int i=nums.size()-2; i>0; i-- ){ 
            suff[i]=nums[i]*suff[i+1];   
        }
        for ( int i=0; i<nums.size(); i++ ){ 
            int preN =1;
            int suffN =1;
            if (i-1>=0) {preN = pre[i-1];}
            if(i+1<nums.size()){suffN = suff[i+1];}
            res[i] = preN * suffN;
        }

        return res;
    }
};
// Time & Space Complexity
// Time complexity: 
// O(n)
// Space complexity: 
// O(n)

// Solution 4
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        // vector<int> pre(nums.size());
        // vector<int> suff(nums.size());
        // pre[0]=nums[0];
        res[0]=1;//obv
        res[1]=nums[0];//obv
        for ( int i=2; i<nums.size(); i++ ){ 
            res[i]=nums[i-1]*res[i-1];   
        }
        // pre array inside res

        // no reverse fashion play like pre impose with arr, because to construct arr2 elements inside res , that process involves null beforehand to get replaced , and if we think of just multiplay the patteren with res updated non-null element instead of replacing, then old values just distrupt the construct
        // res[nums.size()-1]=res[nums.size()-1]*1; // obv // obv a*1=a
        // res[nums.size()-2]=res[nums.size()-1]*nums[nums.size()-1];//obv
        // // for ( int i=nums.size()-3; i>=0; i-- ){ 
        // //     res[i]=nums[i+1]*res[i+1]*res[i];
        // // }

        // suff array inside res without involvement of prearray imposed in it
        int suffN = 1;
        for ( int i=nums.size()-1; i>=0; i-- ){ 
            res[i]=res[i]*suffN;
            suffN=suffN*nums[i];

        }

        // no need
        // for ( int i=0; i<nums.size(); i++ ){ 
        //     int preN =1;
        //     int suffN =1;
        //     if (i-1>=0) {preN = pre[i-1];}
        //     if(i+1<nums.size()){suffN = suff[i+1];}
        //     res[i] = preN * suffN;
        // }

        return res;
    }
};
// Time & Space Complexity
// Time complexity: 
// O(n)
// Space complexity:
// O(1) extra space.
// O(n) space for the output array.