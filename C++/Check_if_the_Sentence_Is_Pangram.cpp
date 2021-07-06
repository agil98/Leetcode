class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> s;
        for (int i = 0; i < sentence.size(); i++)
            s.insert(sentence[i]);
        return s.size() == 26;
    }
};

/*class Solution {
    public boolean checkIfPangram(String sentence) {
        int seen = 0;
        for(char c : sentence.toCharArray()) {
            int ci = c - 'a';
            seen = seen | (1 << ci);
        }
        return seen == ((1 << 26) - 1);
    }
}*/