class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root)
    	{
    		int ldepth = 1 + maxDepth(root->left);
    		int rdepth = 1 + maxDepth(root->right);
    		if (abs(ldepth - rdepth) < 2)
    			return isBalanced(root->left) & isBalanced(root->right);
    		else
    			return false;
    		
    	}
    	return true;
    }
    int maxDepth(TreeNode* root) {
    	if (root)
    	{
    		int ldepth = 1 + maxDepth(root->left);
    		int rdepth = 1 + maxDepth(root->right);
    
    		return ldepth > rdepth ? ldepth : rdepth;
    	}
    	return 0;
    }

};