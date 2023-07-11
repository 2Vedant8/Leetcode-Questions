/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    void helperTwo(TreeNode *root, int val, int k) {
        if (!root) {
            return;
        }
        if (val == k) {
            res.push_back(root->val);
            return;
        }
        if (val > k) {
            return;
        }
        
        helperTwo(root->left, val+1, k);
        helperTwo(root->right, val+1, k);
    }
    
    int helper(TreeNode *root, TreeNode *target, int k) {
        if (!root) {
            return -1;
        }
        
        if (root->val == target->val) {
            helperTwo(root, 0, k);
            return 1;
        }
        
        int left = helper(root->left, target, k);
        int right = helper(root->right, target, k);
        
        if (left > 0) {
            if (left == k) {
                res.push_back(root->val);
            }
            helperTwo(root->right, left+1, k);
            return left+1;
        }
        if (right > 0) {
            if (right == k) {
                res.push_back(root->val);
            }
            helperTwo(root->left, right+1, k);
            return right+1;
        }
        
        return -1;
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        helper(root, target, k);
        
        return res;
    }
};