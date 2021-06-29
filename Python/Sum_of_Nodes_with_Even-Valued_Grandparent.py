class Solution:
    def sumEvenGrandparent(self, root: TreeNode) -> int:
        self.sum = 0
        def preOrderTraversal(node:TreeNode, grandparent:TreeNode, parent: TreeNode):
            if node:
                if grandparent and grandparent.val % 2 == 0:
                    self.sum += node.val
                preOrderTraversal(node.left, parent, node)
                preOrderTraversal(node.right, parent, node)
                
        preOrderTraversal(root.left, None, root)
        preOrderTraversal(root.right, None, root)
        return self.sum