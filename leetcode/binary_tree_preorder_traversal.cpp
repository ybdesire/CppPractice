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
	vector<int> preorderTraversal(TreeNode* root) {
		stack<TreeNode *> stkTrav1;
		vector<int> result;

		TreeNode *treeTrav = root;

		do
		{
			while (treeTrav != NULL){//go left until NULL
				result.push_back(treeTrav->val);
				stkTrav1.push(treeTrav);
				treeTrav = treeTrav->left;
			}

			while (treeTrav == NULL)
			{
				if (!stkTrav1.empty())//pop the stack and go right
				{
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
};