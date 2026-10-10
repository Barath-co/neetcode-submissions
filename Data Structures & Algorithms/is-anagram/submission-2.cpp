class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>result;
        if (s.length() != t.length()) {
             return false;
        }
        for(int i=0;i<s.length();i++){
            result[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            result[t[i]]--;
            if(result[t[i]]<0){
                return false;
                
                
            }
            

        }
        return true;
    }
};
