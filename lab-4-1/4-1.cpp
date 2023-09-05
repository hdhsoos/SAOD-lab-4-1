#include "4-1.h"
using namespace std;


int get_number() {
	int n = rand() % 100;
	return n;
}

void build_tree(TreeNode*& root, int n) {
	if (n == 0) return;
	int n_left = n / 2;
	int n_right = n - n_left - 1;

	int new_data = get_number();
	TreeNode* new_node{ new TreeNode{} };
	new_node->data = new_data;
	cout << new_data << "  ";
	build_tree(new_node->left, n_left);
	build_tree(new_node->right, n_right);
	root = new_node;
}

void in_order(TreeNode* root, int level) {
	if (root == nullptr) return;

	cout << string(level, ' ') << root->data << '\n';
	in_order(root->left, level + 4);
	in_order(root->right, level + 4);
}

void pre_order(TreeNode* root, int level) {
	if (root == nullptr) return;

	pre_order(root->left, level + 4);
	cout << string(level, ' ') << root->data << '\n';
	pre_order(root->right, level + 4);

}

void post_order(TreeNode* root, int level) {
	if (root == nullptr) return;

	post_order(root->right, level + 4);
	cout << string(level, ' ') << root->data << '\n';
	post_order(root->left, level + 4);

}

void destroy(TreeNode*& root) {
	if (root == nullptr)
		return;

	destroy(root->left);
	destroy(root->right);
	delete root;
}
