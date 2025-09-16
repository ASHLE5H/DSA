class Solution {
public:
    int maxArea(vector<int>& height) {
        int mw = 0;
        int t = 0;
        int area = 1;
        int w =0;
        int ht;
        int j = height.size()-1;
        for(int i=0;i<j;){
            w = j - i;
            ht = min(height[i],height[j]);
            area = w * ht;
            mw = max(mw,area);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }

        }
        return mw;
    }
};