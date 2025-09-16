class Solution {
public:
    int majorityElement(vector<int>& nums) {

    //     int freq=0;
    //     int ans=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(freq==0){
    //             ans = nums[i];
    //         }
    //         if(nums[i]==ans){
    //             freq++;
    //         }
    //         else{
    //             freq--;
    //         }
    //     }
    // return ans;
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()/2];
        
        // sort(nums.begin(),nums.end());
        //  if (nums.size() == 1) return nums[0];
        // int freq=1;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i] == nums[i-1]){
        //         freq++;
        //     }
        //     else{
        //         freq=1;
        //     }
        //     if(freq>nums.size()/2){
        //         return nums[i];
        //     }
        // }
        
    // return 0;

    int freq=0;
    int n = nums.size();
    int ans;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans = nums[i];
        }
        if(nums[i] == ans){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;

    }
};