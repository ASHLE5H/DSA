class Solution {
public:
    int bs(vector<int>& arr , int tar , int start , int end){
        if(start <= end){
            int mid = start + (end-start)/2;

            if(arr[mid] == tar) return mid;
            else if(arr[mid] <= tar) return bs(arr , tar , mid+1 , end);
            else return bs(arr , tar , start , mid -1);
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return bs(nums , target , 0 , n-1);
    }
};