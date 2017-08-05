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

class Solution {
public:
    void Mirror(TreeNode *pRoot) {
		if(pRoot == nullptr)
           return;
        TreeNode *tmp = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = tmp;
        if(pRoot->left != nullptr)
            Mirror(pRoot->left);
        if(pRoot->right != nullptr)
            Mirror(pRoot->right);
    }
};
