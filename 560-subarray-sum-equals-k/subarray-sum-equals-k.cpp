class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        vector<int> ans;
        int n = nums.size();
        int count=0;


        for(int i=0;i<n;i++){
            int sum = nums[i];
            int a = i+1;
            if(sum == k){
                    count++;
                }
            while(a<n){
                
                sum = sum + nums[a];
                if(sum == k){
                    count++;
                }
                a++;
            }
        }
        return count;
    }
};