class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        set<vector<int>> set;
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int k = j+1;
                int d = n-1;
                while(k<d){
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[d];

                    if(sum>target) d--;
                    else if(sum<target) k++;
                    else{
                        vector<int> v = {nums[i], nums[j],nums[k],nums[d]};
                        if(set.find(v) == set.end()){
                            set.insert(v);
                            ans.push_back(v);
                        }
                        k++;
                        d--;
                    }
                }
            }
        }
        return ans;
    }
};