using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int balanced = 0;
        int numBalanced = 0;
        for(int i = 0; i < s.size(); i++){
            if (s[i] == 'R')
                balanced +=1;
            else
                balanced -=1;
            if (balanced == 0)
                numBalanced += 1;
        }
        return numBalanced;
    }
};