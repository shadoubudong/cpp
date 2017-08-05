#include <iostream>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution
{
public:
    bool HasSubTree(TreeNode* r1, TreeNode* r2)
    {
        bool res = false;
        if(r1 && r2)
        {
            if(r1->val == r2->val)
                res = Tree1HasTree2(r1, r2);
            if(!res)
                res = HasSubTree(r1->left, r2);
            if(!res)
                res = HasSubTree(r1->right, r2);
        }
        return res;
    }

    bool Tree1HasTree2(TreeNode* r1, TreeNode* r2)
    {
        if(r2 == nullptr)
            return true;
        if(r1 == nullptr)
            return false;
        if(r1->val == r2->val)
            return Tree1HasTree2(r1->left, r2->left) && Tree1HasTree2(r1->right, r2->right);
    }

};
