class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1 = 0;
        int count0=0;
        int count2=0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count0++;
            }
            if(nums[i]==1){
                count1++;
            }
            if(nums[i]==2){
                count2++;
            }
        }
        int idx=0;
        for(int j=idx;j<count0;j++){
            nums[idx] = 0;
            idx++;
            
        }
        for(int k=0;k<count1;k++){
            nums[idx] = 1;
            idx++;
        }
        for(int m=0;m<count2;m++){
            nums[idx] = 2;
            idx++;
        }
    }

};