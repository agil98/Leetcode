class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        keyValue = { "type": 0, "color": 1, "name": 2}
        index = keyValue[ruleKey]
        matches = 0
        for item in items:
            if item[index] == ruleValue:
                matches = matches + 1
        return matches
