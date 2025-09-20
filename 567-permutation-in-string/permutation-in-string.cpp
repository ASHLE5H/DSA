class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for (int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }

        int windsize = s1.length();

        for(int i=0;i<s2.length();i++){
            int slidewindow[26] = {0};
            int windowIdx = 0;
            int idx = i;

            while(windowIdx < windsize && idx < s2.length()){
                slidewindow[s2[idx] - 'a']++;
                idx++;
                windowIdx++;
            } 
            int match = 0;
            for(int i=0;i<26;i++){
                if(freq[i] == slidewindow[i]){
                    match++;
                }
                if(match == 26){
                    return true;
                }
            }
        }
        return false;
    }
};