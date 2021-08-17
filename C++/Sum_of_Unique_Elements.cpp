class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int, int> seen; //key = num, value = num of times seen
        for(int i = 0; i < nums.size(); i++){
            seen[nums[i]]++;
        }
        unordered_map<int, int>::iterator it;
        for(it=seen.begin(); it!=seen.end(); it++){
            if (it->second == 1)
                sum += it->first;
        }
        return sum;
    }
};