class Solution {
public:
    void ss(vector<int> &nums , vector<int> &curr, vector<vector<int>> &ans , int i){
        
        if(i == nums.size()){
            ans.push_back(curr);
            return;
        }

        curr.push_back(nums[i]);
        ss(nums , curr , ans ,i+1);
        

        curr.pop_back();
        ss(nums , curr , ans , i+1);


    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;

         ss(nums , curr , ans , 0);
        
        return ans;

    }
};