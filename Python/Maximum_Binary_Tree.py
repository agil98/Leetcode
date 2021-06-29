class Solution:
    def constructMaximumBinaryTree(self, nums: List[int]) -> TreeNode:
        def createTree(arr):
            if not arr:
                return None
            
            maxVal = max(arr)
            indexMax = arr.index(maxVal)
            node = TreeNode(maxVal)
            
            node.left = createTree(arr[:indexMax])
            node.right = createTree(arr[indexMax + 1:])
            return node

        return createTree(nums)