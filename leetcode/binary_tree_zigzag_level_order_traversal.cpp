vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

	TreeNode *tree = root;
	vector<vector<int>> result;
	vector<int> resultTmp;
	vector<TreeNode*> treeTrvl;
	vector<TreeNode*> treeTrvlTmp;

	if (root == NULL)
		return result;

	int count = 0; 
	treeTrvl.push_back(root);
	while (!treeTrvl.empty())
	{
		vector<TreeNode*>::iterator itrvl;
		for (itrvl = treeTrvl.begin(); itrvl != treeTrvl.end(); itrvl++)
		{
			resultTmp.push_back((*itrvl)->val);
			if ((*itrvl)->left)
			{
				treeTrvlTmp.push_back((*itrvl)->left);
			}
			if ((*itrvl)->right)
			{
				treeTrvlTmp.push_back((*itrvl)->right);
			}			
		}
		count++;
		if (0 == count%2)
		{
			std::reverse(resultTmp.begin(), resultTmp.end());
		}
		result.push_back(resultTmp);

		resultTmp.clear();
		treeTrvl.clear();
		treeTrvl = treeTrvlTmp;
		treeTrvlTmp.clear();
	}
	return result;
}
