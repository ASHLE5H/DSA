class Solution {
public:
    bool isPalindrome(string s) {


    string str = "";

    for(auto ch : s){
        if(isalnum(ch)){
            str += tolower(ch);
        }
    }
     
     s = str;

    reverse(s.begin(),s.end()); 

    if(str == s){
        return true;
    }
    return false;





    }
};