class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int start = 0;
        int n = nums.size();
        int end = n - 1;

        while( start <= end){
            int mid = start + (end-start)/2;

            if(n==1){
                return nums[0];
            }

            if(mid==0 && nums[mid] != nums[mid+1]){
                return nums[mid];
            }

            if(mid == end && nums[mid] != nums[mid-1]){
                return nums[mid];
            }

            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid + 1]){
                return nums[mid];
            }
            
            if(mid%2==0){
                if(nums[mid] == nums[mid-1]){
                    end = mid -1;
                }
                else{
                    start= mid +1;
                }
            }
            else{
                if(nums[mid] != nums[mid-1]){
                    end = mid -1;
                }
                else{
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
};