class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.empty() && n == 1) return 1;
        unordered_map<int, pair<int, int>> trustMap;
        for (auto people : trust){
          trustMap[people[1]].first++;
          trustMap[people[0]].second++;
        }
        for (auto people : trustMap){
          if(people.second.first == n-1 && people.second.second == 0){
            return people.first;
          }
        }
        return -1;
    }
};