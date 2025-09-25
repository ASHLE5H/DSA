class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int i=0;
        int j = m-1;

        while(i<=j){

            int k = i+(j-i)/2;
            int n = matrix[0].size();

            if(target >= matrix[k][0] && target <= matrix[k][n-1]){
                int st = 0;
                int end = n-1;
                while(st<=end){
                    int mid = st+(end-st)/2;

                    if(matrix[k][mid] == target) return true;

                    else if(matrix[k][mid] < target){
                        st = mid + 1;
                    }
                    else{
                        end = mid -1;
                    }
                }
                return false;
            }
            else if(target > matrix[k][n-1]){
                i = k+1;
            }
            else{
                j = k-1;
            }

        }
       
        return false;

    }
};









 
        
        
        
        
        
        
        
        
        
        
        
        
        
        // int m = matrix.size();
        

        // for(int i=0;i<m;i++){
        //     int n = matrix[i].size();
        //     if(target>=matrix[i][0] && target<= matrix[i][n-1]){
        //         int st = 0;
        //         int end = n-1;

        //         while(st<=end){
        //             int mid = st+(end-st)/2;

        //             if(matrix[i][mid] == target) return true;

        //             else if(matrix[i][mid] < target){
        //                 st = mid + 1;
        //             }
        //             else{
        //                 end = mid -1;
        //             }
        //         }
        //     }
        // }