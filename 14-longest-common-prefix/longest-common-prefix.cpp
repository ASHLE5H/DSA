class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string cmp = strs[0];
        for(int i=1;i<strs.size() && cmp != "" ; i++){
            string s = strs[i];
            int s1 = s.length();
            int idx = 0;
            int sidx = 0;
            int n = cmp.length();


            while( idx < n && sidx < s1){
                if( cmp[idx] != s[idx] ){
                    break;
                }
                idx++;
                sidx++;
            }
            cmp.erase(idx,cmp.length());

        }
        return cmp;
    }
};