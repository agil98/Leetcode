class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        std::set<string> s;
        for (auto email : emails){
            string cleanEmail;
            for (auto c : email){
                if (c == '+' || c == '@') break;
                if (c == '.') continue;
                cleanEmail += c;
            }
            s.insert(cleanEmail + email.substr(email.find('@')));
        }
        return s.size();
    }
};