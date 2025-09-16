class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique_elem=0;
        for(int i:nums){
            unique_elem=unique_elem ^ i;
        }
        return unique_elem;
    }
};