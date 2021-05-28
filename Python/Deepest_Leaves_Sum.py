class Solution:
    count = 0
    maxDepth = 0
    def deepestLeavesSum(self, root: TreeNode) -> int:
        
        def dfs(root, depth):

            if root:

                if (root.left == None and root.right == None):
                    
                    if(self.maxDepth < depth):
                        self.count = root.val
                        self.maxDepth = depth
                        
                    elif(self.maxDepth == depth):
                        self.count += root.val

                dfs(root.left, depth + 1)

                dfs(root.right, depth + 1)
                
        dfs(root, 0)
        
        return self.count