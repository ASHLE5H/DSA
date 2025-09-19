class Solution {
public:
    bool isPalindrome(int x) {

            if(x < 0){
                return false;
            }

        vector<int> num;
        while(x>0){

            num.push_back(x%10);
            x = x/10;

        }
        int j = num.size() - 1;
        for(int i=0;i<j;i++){
            if(num[i] == num[j]){
                j--;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};