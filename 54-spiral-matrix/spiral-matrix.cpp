class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i=0;


        int strcol = 0;
        int strrow = 0;
        int endcol = n-1;
        int endrow = m-1;

        vector<int> arr;

        while(strrow <= endrow && strcol <= endcol){

            for(int i = strcol;i<=endcol;i++){
                arr.push_back(matrix[strrow][i]);
            }
            for(int i = strrow+1;i<=endrow;i++){
                 arr.push_back(matrix[i][endcol]);
            }
            for(int i = endcol-1;i>=strcol;i--){
                if(strrow == endrow) break;
                 arr.push_back(matrix[endrow][i]);
            }
            for(int i = endrow-1;i>=strrow+1;i--){
                if(strcol== endcol) break;
                 arr.push_back(matrix[i][strcol]);
            }

            strcol++;
            strrow++;
            endrow--;
            endcol--;
        }

        return arr;
    }
};