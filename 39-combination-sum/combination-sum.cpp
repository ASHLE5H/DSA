class Solution {
public:

    void getAllCombination( vector<vector<int>>&result , vector<int>&combination ,int idx ,int target , vector<int>&candidates){

        if(target == 0){
            // if(s.find(combination) == s.end()){
                 result.push_back(combination);
                //  s.insert(combination);
            // }
            return;
        }

        if(target < 0 || candidates.size() <= idx){
            return;
        }
        // add element to comb array
        combination.push_back(candidates[idx]);

        // check element once
        // getAllCombination( result  , combination , idx+1 ,  target - candidates[idx] , candidates , s );
        // check element multiple times
        getAllCombination( result , combination , idx , target - candidates[idx] , candidates  );

        // skip element
        combination.pop_back();
        getAllCombination( result , combination , idx+1 , target  , candidates );

    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> result;
        vector<int> combination;
        set<vector<int>> s;

        getAllCombination( result , combination , 0 , target , candidates );

        return result;
    }
};