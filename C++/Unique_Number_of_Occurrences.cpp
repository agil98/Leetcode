class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        std::unordered_map<int, int> map;
        
        for(int i = 0; i < arr.size(); i++){
            if(map.find(arr[i]) == map.end())
                map[arr[i]] = 1;
            else
                map[arr[i]] += 1;
        }
        
        std::set<int> s;
        
        for (auto x : map)
            s.insert(x.second);
        return s.size() == map.size();
    }
};