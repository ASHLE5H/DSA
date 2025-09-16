class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count=0;
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            int count = count + nums[i];
            maxi = max(maxi,count);
            if(count<0){
                count = 0;
            }
        }
        return maxi;
    }
};