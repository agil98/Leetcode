class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        nums = start
        for i in range(1, n):
            nums = nums ^ (start + 2*i)
        return nums
