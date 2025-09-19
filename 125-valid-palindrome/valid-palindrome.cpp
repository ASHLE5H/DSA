class Solution {
public:
    bool isPalindrome(string s) {
        
        for(auto &ch : s){
            ch = tolower(ch);
        }

        s.erase(
            remove_if(s.begin(),s.end() , [](unsigned char ch)
                                    {
                                        return !isalnum(ch);
                                    }),
            s.end()
        );
     string rev = s;
   reverse(rev.begin(),rev.end());
    


    if(s == rev){
        return true;
    }
    return false;
    }
};