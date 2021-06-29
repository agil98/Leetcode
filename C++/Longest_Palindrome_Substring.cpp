class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); } ), s.end()); // removes all special characters
        for_each(s.begin(), s.end(), [](char & c) { c = tolower(c); }); // lowercase
        string c = s;
        reverse(c.begin(), c.end());
        return s == c;
    }
};