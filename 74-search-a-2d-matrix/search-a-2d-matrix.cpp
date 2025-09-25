class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        

        for(int i=0;i<m;i++){
            int n = matrix[i].size();
            if(target>=matrix[i][0] && target<= matrix[i][n-1]){
                int st = 0;
                int end = n-1;

                while(st<=end){
                    int mid = st+(end-st)/2;

                    if(matrix[i][mid] == target) return true;

                    else if(matrix[i][mid] < target){
                        st = mid + 1;
                    }
                    else{
                        end = mid -1;
                    }
                }
            }
        }
            return false;
    }
};