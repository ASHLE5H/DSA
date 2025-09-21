class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();
        int idx =0;
        for(int i=0;i<n;i++){
            int count =0;
            char ch = chars[i];
            while(i< n && ch == chars[i]){
                count++;
                i++;
            }
            if(count == 1){
                chars[idx] = ch;
                idx++;
            }
            else{

                string s = to_string(count);
                chars[idx] = ch;
                idx++;
                for(char c : s){
                    chars[idx] = c;
                    idx++;
                }
            }
            i--;
        }
        chars.erase(chars.begin()+idx,chars.end());
        return chars.size();
    }
};