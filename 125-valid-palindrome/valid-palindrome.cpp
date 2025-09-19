class Solution {
public:
    bool isPalindrome(string s) {
        
        for(auto &ch : s){              //using & or reference so the actual value in s change
            ch = tolower(ch);
        }

        s.erase(                         //used to remove non aplhanumeric
            remove_if(s.begin(),s.end() , [](unsigned char ch)
                                    {
                                        return !isalnum(ch);
                                    }),
            s.end()
        );
     string rev = s;
     reverse(rev.begin(),rev.end());      //reversing the string
    


    if(s == rev){
        return true;
    }
    return false;
    }
};