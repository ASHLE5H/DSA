class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

       int n = nums.size();
       vector<vector<int>> res;
       set<vector<int>> map;

        sort(nums.begin() , nums.end());
        for(int i=0;i<n;i++){
            int k = n-1;
            int j = i+1;
            if( i>0 && nums[i] == nums[i-1]){
                continue;
            }
            else{
                while(j<k){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0) j++;
                else if(sum > 0) k--;
                else{
                    vector<int> x = {nums[i] ,nums[j] , nums[k] };
                    
                    if(map.find(x) == map.end()){
                        map.insert(x);
                        res.push_back(x);
                    }
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
            }
            }
            
        }


        return res;
       
       
       
       
       
       
       
        // int n = nums.size();
        // vector<vector<int>> set;
        // for(int i=0;i<n;i++){

        //     int target = -nums[i];
        //     unordered_map <int,int> map;

        //     for(int j=i+1;j<n;j++){
                
        //         int c = target - nums[j];
        //         if(map.find(c) != map.end()){
        //             vector<int> x = {nums[i], nums[j] , c};

        //             sort(x.begin(),x.end());
        //             auto it = std::find(set.begin() , set.end() , x);
        //             if( it == set.end()){
        //                 set.push_back(x);
        //             }
        //         }
                
        //         map[nums[j]] = j;

        //     }
        // }

        // return set;
        
        
        
        
        
        
        
        
        
        
        
        
        
        // int n = nums.size();
        // vector<vector<int>> set;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i] + nums[j] + nums[k] == 0){
        //                 vector<int> a = {nums[i], nums[j] , nums[k]};
        //                 sort(a.begin(),a.end());

        //                 auto it = std::find(set.begin(),set.end() , a);

        //                 if(it == set.end()){
        //                     set.push_back(a);
        //                 }
        //             }
        //         }
        //     }
        // }

        // return set;
        
    }
};