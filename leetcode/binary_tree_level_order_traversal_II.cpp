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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    	vector<vector<int>> result;
    	vector<int> tmpResult;
    	vector<TreeNode*> nodeTrvl;
    	vector<TreeNode*> nodeTrvlTmp;
    	if (root != NULL)
    	{
    		nodeTrvl.push_back(root);
    
    		while (!nodeTrvl.empty())
    		{
    			vector<TreeNode*>::iterator iterNodeTrvl = nodeTrvl.begin();
    			for (; iterNodeTrvl != nodeTrvl.end(); iterNodeTrvl++)
    			{
    				tmpResult.push_back((*iterNodeTrvl)->val);//
    				if ((*iterNodeTrvl)->left)
    				{
    					nodeTrvlTmp.push_back((*iterNodeTrvl)->left);
    				}
    				if ((*iterNodeTrvl)->right)
    				{
    					nodeTrvlTmp.push_back((*iterNodeTrvl)->right);
    				}
    			}
    
    			result.push_back(tmpResult);
    			tmpResult.clear();
    			//clear nodeTrvl
    			nodeTrvl.clear();
    			//nodeTrvl = nodeTrvlTmp
    			nodeTrvl = nodeTrvlTmp;
    			//clear nodeTrvlTmp
    			nodeTrvlTmp.clear();
    		}
    	}
    	std::reverse(result.begin(), result.end());
    	return result;
    }
};