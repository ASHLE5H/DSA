class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            else{
                for(int j=i+1;j<n-2;j++){
                    if(j>i+1 && nums[j] == nums[j-1]){
                        continue;
                    }
                    else{
                        int k = j+1;
                        int d = n-1;
                        while(k<d){
                            long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[d];

                            if(sum>target) d--;
                            else if(sum<target) k++;
                            else{
                                vector<int> v = {nums[i], nums[j],nums[k],nums[d]};
                                ans.push_back(v);
                                k++;
                                d--;

                                while(k<d && nums[k] == nums[k-1]) k++;
                                while(k<d && nums[d] == nums[d+1]) d--;
                            }
                        }
                    }
                
                }
            } 
        }
        return ans;
    }
};