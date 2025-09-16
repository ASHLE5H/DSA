class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int unique_ele = 0;
       int n = nums.size();
       for(int i=0;i<n;i++){
            unique_ele = unique_ele ^ nums[i];
       }
       return unique_ele;
    }
};