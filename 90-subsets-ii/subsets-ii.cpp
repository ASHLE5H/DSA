class Solution {
public:
    void ss(vector<int>& nums , vector<vector<int>>& ans , int i , vector<int>& curr , set<vector<int>> &set){

        if(i == nums.size()){
            if(set.find(curr) == set.end()){
                set.insert(curr);
                ans.push_back(curr);
            }
            return;
        }

        curr.push_back(nums[i]);
        ss(nums , ans , i+1 , curr , set);

        curr.pop_back();
        ss(nums , ans , i+1 , curr , set);


    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        set<vector<int>> set;
        sort(nums.begin() , nums.end());
        ss(nums , ans , 0 , curr ,set );
        return ans;
        
    }
};