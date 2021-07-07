class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        set<int> s;
        vector<int> result;
        std::queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if (node){
                int diff = k - node->val;
                if(s.find(node->val) != s.end())
                    return true;
                else
                    s.insert(diff);
                q.push(node->left);
                q.push(node->right);
            }
        }
    return false;
    } 
};
