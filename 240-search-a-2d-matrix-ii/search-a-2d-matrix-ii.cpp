class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
       

        for(int i=0;i<m;i++){
            int n = matrix[i].size();
             int startcol = 0;
            int endcol = n-1;
            if(target>= matrix[i][0] && target<= matrix[i][n-1]){
                while(startcol<=endcol){
                
                int mid = startcol + (endcol-startcol)/2;

                if(matrix[i][mid] == target){
                    return true;
                }
                else if(matrix[i][mid] < target){
                    if(mid+1){
                    startcol = mid +1;
                    }
                    else{
                        startcol = mid;
                    }
                }
                else{
                    endcol = mid -1;
                    
                }
            }
            }
        }
        return false;
        
    }
};