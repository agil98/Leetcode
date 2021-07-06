#include <limits>
/* Depth First Search */
class Solution {
public:
    int minDepth(TreeNode* root) {
        int min = std::numeric_limits<int>::max();
        if (root == NULL)
            return 0;
        traversal(root, min, 1);
        return min;
    }
    
    void traversal(TreeNode* node, int& min, int currDepth){
        if (node){
            if (currDepth > min) // if the current depth is greater than the min, return
                return;
            if (node->left == NULL && node->right == NULL)
                min = currDepth < min ? currDepth : min; 
            else{
                traversal(node->left, min, currDepth + 1);
                traversal(node->right, min, currDepth + 1);   
            }
        }
        return;
    }
};

/* Breath First Search */
#include <limits>
class Solution {
public:
    int minDepth(TreeNode* root) {
        int min = std::numeric_limits<int>::max();
        if (root == NULL)
            return 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        while(!q.empty()){
            pair<TreeNode*, int> p = q.front();
            TreeNode* node = p.first;
            int currDepth = p.second;
            q.pop();
            if(node->left == NULL && node->right == NULL) min = currDepth < min ? currDepth : min;
            if (currDepth > min) continue;
            if (node->left) q.push({node->left, currDepth + 1});
            if (node->right)  q.push({node->right, currDepth + 1});
            
        }
        return min;
    }
};