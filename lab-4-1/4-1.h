#pragma once
#include <iostream>
#include <string>
#include <ctime>

struct TreeNode {
	int data{};
	TreeNode* left{ nullptr };
	TreeNode* right{ nullptr };
};


void menu();
int get_number();
void build_tree(TreeNode*& root, int n);
void in_order(TreeNode* root, int level);
void post_order(TreeNode* root, int level);
void pre_order(TreeNode* root, int level);
void destroy(TreeNode*& root);