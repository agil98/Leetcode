class Solution {
public:
    int firstUniqChar(string s) {
        int index = s.length();
        set<char> seen;
        unordered_map<char, int> m;
        for (int i = 0; i < s.size(); i++){
            char c = s[i];
            if (seen.find(c) != seen.end())
                m.erase(c);
            else
                m.insert({c, i});
            seen.insert(c);
        }
        
        if (m.empty()) return -1;
        else {
            unordered_map<char, int>::iterator it;
            for (auto c : m){
                if (c.second < index) index = c.second;
            }
        }
        return index;
    }
};