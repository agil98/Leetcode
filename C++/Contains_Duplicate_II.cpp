class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> numIndexPair;
        
        for(int i = 0; i < nums.size(); i++){
            if(numIndexPair.find(nums[i]) != numIndexPair.end() && i - numIndexPair[nums[i]] <= k)
                return true;
            numIndexPair[nums[i]] = i;
        }
        return false;
    }
};