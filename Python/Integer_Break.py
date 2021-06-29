import math
class Solution:
    def integerBreak(self, n: int) -> int:
        
        if (n == 2):
            return 1
        if (n == 3):
            return 2
        
        if (n % 3 == 1):
            numThrees = math.floor(n/3) - 1
            return int((3**numThrees) * 4)
        
        elif (n % 3 == 2):
            numThrees = math.floor(n/3)
            return int((3**numThrees) * 2)
        
        else:
            return int(3**(n/3))