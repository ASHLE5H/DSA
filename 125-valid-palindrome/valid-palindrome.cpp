class Solution {
public:
    bool isPalindrome(string s) {
        
        for(auto &ch : s){              //using & or reference so the actual value in s change
            ch = tolower(ch);
        }

        // if(isalnum(s) == isalnum(reverse(s.begin(),s.end()))){
        //     return true
        // }

        string str = "";
        for(auto ch : s){
            if(isalnum(ch)){
            str += ch;
            }
        }

        s = str;
        reverse(s.begin(),s.end());      //reversing the string
    


    if(str == s){
        return true;
    }
    return false;


    // string str = "";

    // for(auto ch : s){
    //     if(isalnum(ch)){
    //         str += tolower(ch);
    //     }
    // }
     
    //  s = str;

    // reverse(s.begin(),s.end()); 

    // if(str == s){
    //     return true;
    // }
    // return false;





    }
};