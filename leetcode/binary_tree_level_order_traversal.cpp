class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> result;
		vector<int> tmpResult;
		vector<TreeNode*> nodeTrvl;
		vector<TreeNode*> nodeTrvlTmp;
		if (root != NULL)
		{
			nodeTrvl.push_back(root);
			//travel every layer
			while (!nodeTrvl.empty())
			{
				vector<TreeNode*>::iterator iterNodeTrvl = nodeTrvl.begin();
				for (; iterNodeTrvl != nodeTrvl.end(); iterNodeTrvl++)
				{
					tmpResult.push_back((*iterNodeTrvl)->val);
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
		return result;
	}
};