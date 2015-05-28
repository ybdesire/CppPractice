int minDepth(TreeNode* root) {
	if (root)
	{
		int lDepth = 1 + minDepth(root->left);
		int rDepth = 1 + minDepth(root->right);
		//tree [1,2]
		// 1
		//2 
		//should outupt min depth 2
		if ((lDepth == 1 && rDepth > lDepth))
		{
			return rDepth;
		}
		else if ((rDepth == 1 && lDepth > rDepth))
		{
			return lDepth;
		}
		else
		{
			return lDepth < rDepth ? lDepth : rDepth;
		}
	}
	return 0;
}