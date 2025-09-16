class Solution {
public:
    int maxArea(vector<int>& height) {
        // int mw = 0;
        // int t = 0;
        // int area = 1;
        // int w =0;
        // int ht;
        // int j = height.size()-1;
        // // for(int i=0;i<height.size();i++){
        // //     for(int j=i+1;j<height.size();j++){
        // //         w = j - i;
        // //         ht = min(height[i],height[j]);
        // //         area = w * ht;
        // //         mw = max(mw,area);
        // //     }
        // // }
        // for(int i=0;i<j;){
        //     w = j - i;
        //     ht = min(height[i],height[j]);
        //     area = w * ht;
        //     mw = max(mw,area);
        //     if(height[i]<height[j]){
        //         i++;
        //     }else{
        //         j--;
        //     }

        // }
        // return mw;

        int i = 0;
        int n = height.size();
        int j= n-1;
        int area = 1;
        int mx = 0;
        int width = 0;
        int mn = 0;
        while(i<j){
            width = j-i;
            mn = min(height[i] , height[j]);
            area = width * mn;
            mx = max(mx, area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mx;
    }
};