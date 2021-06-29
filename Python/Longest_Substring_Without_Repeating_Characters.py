class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = 0
        result = 0
        for i in range(len(s)):
            substring = '';
            for j in range(i, len(s)):
                if s[j] not in substring:
                    substring += s[j]
                else:
                    substring = ''
                    break
                n = len(substring)
                if n > result: 
                    result = n
                n = 1
        return result