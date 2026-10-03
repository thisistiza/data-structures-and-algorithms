class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        std::unordered_map<char,int> sCh;
        for(int i = 0; i < s.size(); i++){
            if (sCh.find(s[i])==sCh.end()){
                sCh[s[i]] = 0;
            }
            sCh[s[i]] += 1;
        }
        for(int i = 0; i < t.size(); i++){
            if (sCh.find(t[i])!=sCh.end() && sCh[t[i]] != 0){
                sCh[t[i]] -= 1;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
