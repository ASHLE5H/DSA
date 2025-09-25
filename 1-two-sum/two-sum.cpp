class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int> ans;

        vector<pair<int,int>> arr;  //{value,index}
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }

        std::sort(arr.begin(),arr.end());

        int j=n-1;
        int i = 0;
        while(i<=j){
            if (target == arr[i].first+arr[j].first){
                ans.push_back(arr[i].second);
                ans.push_back(arr[j].second);
                return ans;
            }
            else if(target < arr[i].first+arr[j].first){
                j--;
            }
            else{
                i++;
            }

        }

        return ans;
    }
};