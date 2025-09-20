class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.find(part) < s.length()){       //s.find(part) will return the first index 
                                                // of the s were it matches part
            int i = s.find(part);
            s.erase(i,part.length());           //s.erase() will take start index and end + 1 index to
                                                //erase it from s
        }

        return s;
    }
};