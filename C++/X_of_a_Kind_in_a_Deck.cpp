class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        unordered_map<int, int> seen; // card, num of times seen
        
        for (auto card : deck)
            seen[card]++;
        
        unordered_map<int, int>::iterator it;
        int partition = seen.begin()->second;
        
        for(it=seen.begin(); it!=seen.end(); it++){
            if (gcd(partition, it->second) < 2)
                return false;
            else
                partition = partition < it->second ? partition : it->second;
        }
        
        return true;
    }
};