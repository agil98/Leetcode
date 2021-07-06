using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int diff = target -  nums[i];
            if(dict.find(nums[i]) != dict.end()) {
                result.push_back(i);
                result.push_back(dict[nums[i]]);
                break;
            } 
            else
             dict[diff] = i;
        }
        
        return result;
    }
};