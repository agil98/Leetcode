class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        set<int> s;
        s.insert(edges[0][0]);
        s.insert(edges[0][1]);
        if (s.find(edges[1][0]) != s.end())
            return edges[1][0];
        else 
            return edges[1][1];
    }
};