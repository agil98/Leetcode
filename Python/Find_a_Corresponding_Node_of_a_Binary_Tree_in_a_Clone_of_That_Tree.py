class Solution:
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        def preOrderTraversal(node):
            if node:
                if(node.val == target.val):
                    self.output = node
                preOrderTraversal(node.left)
                preOrderTraversal(node.right)  
        preOrderTraversal(cloned)
        return self.output