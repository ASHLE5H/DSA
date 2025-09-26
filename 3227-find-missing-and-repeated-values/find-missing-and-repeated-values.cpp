class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size();
        unordered_map <int,int> map;
    
        int repeated = 0;
        int missing = 0;
        int count = 0;
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){
                count++;
                if(map.find(grid[i][j]) != map.end()){
                    repeated = grid[i][j];
                }
                else{
                map[grid[i][j]] = j;
                }
            }
        }

        for(int i=1;i<=count;i++){
            if(map.find(i) == map.end()){
                missing = i;
            }
        }

        return {repeated , missing};


    }
};