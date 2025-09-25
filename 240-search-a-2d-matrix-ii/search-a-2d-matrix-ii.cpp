class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();       
        int st = 0;
        int end = n-1;

        while(st<m && end>=0){

            if(target == matrix[st][end]){
                return true;
            }
            else if(target > matrix[st][end]){
                st++;
            }
            else{
                end--;
            }
        }

        
        return false;
        
    }
};



// for(int i=0;i<m;i++){
//             int n = matrix[i].size();
//              int startcol = 0;
//             int endcol = n-1;
//             if(target>= matrix[i][0] && target<= matrix[i][n-1]){
//                 while(startcol<=endcol){
                
//                 int mid = startcol + (endcol-startcol)/2;

//                 if(matrix[i][mid] == target){
//                     return true;
//                 }
//                 else if(matrix[i][mid] < target){
//                     startcol = mid +1;
//                 }
//                 else{
//                     endcol = mid -1;
                    
//                 }
//             }
//             }
//         }