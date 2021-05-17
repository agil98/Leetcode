class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        return max(sum(money for money in bank) for bank in accounts)
