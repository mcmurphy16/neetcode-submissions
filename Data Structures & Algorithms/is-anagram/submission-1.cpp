class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> a;
        if(s.size() != t.size()){
            return false;
        }
        for(int i=0; i<s.size(); i++){
            a[s[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            if(a[t[i]] == 0){
                return false;
            }
            a[t[i]]--;
        }
        return true;
    }
};
