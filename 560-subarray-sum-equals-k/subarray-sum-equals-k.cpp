class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        
       int n = nums.size();
       vector<int> sum(n , 0);
       sum[0] = nums[0];
       for(int i=1;i<n;i++){
            sum[i] = sum[i-1] + nums[i];
       }
       
       unordered_map <int,int> map;
       int count=0;
       for(int i=0;i<n;i++){
        if(sum[i] == k){
            count++;
        }
        int x = sum[i] - k;
        if(map.find(x) != map.end()){
            count = count + map[x];
        }

        if(map.find(sum[i]) == map.end()){
            map[sum[i]] = 0;
        }
        map[sum[i]]++;
       }
       return count;
       
       
        // int n = nums.size();
        // vector<int> sum(n , 0);

        // int count=0;
        // sum[0] = nums[0];
        // for(int i=1;i<n;i++){
        //     sum[i] = sum[i-1] + nums[i];
        // }

        // unordered_map<int , int> map;
        // for(int i=0;i<n;i++){
        //     if(sum[i] == k){
        //         count++;
        //     }

        //     int x = sum[i] - k;
        //     if(map.find(x) != map.end()){
        //         count = count + map[x];
        //     }

        //     if(map.find(sum[i]) == map.end()){
        //         map[sum[i]] = 0;
        //     }
        //     map[sum[i]]++;
        // }
        
        // return count;
        
        
        
        
        
        
        
        // vector<int> ans;
        // int n = nums.size();
        // int count=0;


        // for(int i=0;i<n;i++){
        //     int sum = nums[i];
        //     int a = i+1;
        //     if(sum == k){
        //             count++;
        //         }
        //     while(a<n){
                
        //         sum = sum + nums[a];
        //         if(sum == k){
        //             count++;
        //         }
        //         a++;
        //     }
        // }
        // return count;
    }
};