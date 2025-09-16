class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CS = 0;
        int MS=INT_MIN;
        for(int i=0;i<nums.size();i++){
            CS += nums[i];
            MS = max(MS,CS);
            if(CS<0){
                CS=0;
            }
        }
        return MS;
    }
};