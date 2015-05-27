vector<int> inorderTraversal(TreeNode* root) {
	stack<TreeNode *> stkTrav1;
	vector<int> result;
	TreeNode *treeTrav = root;

	do
	{
		while (treeTrav != NULL){
			stkTrav1.push(treeTrav);
			treeTrav = treeTrav->left;
		}

		while (treeTrav == NULL)
		{
			if (!stkTrav1.empty())
			{
				result.push_back(stkTrav1.top()->val);
				treeTrav = stkTrav1.top()->right;
				stkTrav1.pop();
			}
			else
			{
				break;
			}
		}
	} while (!stkTrav1.empty() || treeTrav != NULL);
	return result;
}
