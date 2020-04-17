#include <iostream>

using namespace std;

/**
 * Second attempt for me to write it from scratch, without copying.
 */

struct node {
	int val;
	node *left;
	node *right;
};

class Btree {
	public:
		Btree();
		~Btree();

		void insert(int val);
		node *search(int val);
		void destroy_tree();
	private:
		void insert(int val, node *leaf);
		void destroy_tree(node *leaf);
		node *search(int val, node *leaf);
		node *root;
};

Btree::Btree() {
	root = NULL;
}

Btree::~Btree() {
	destroy_tree();
}

node *Btree::search(int val) {
	cout << "---- SEARCH for " << val << "-----" << endl;
	return search(val, root);
}

void Btree::insert(int val) {
	cout << " ---- INSERT " << val << " ----- " << endl;
	if (root == NULL) {
		root = new node;
		root->val = val;
		root->left = NULL;
		root->right = NULL;
	} else {
		insert(val, root);
		cout << " --- END INSERT --- " << endl;
	}
}

void Btree::destroy_tree() {
	destroy_tree(root);
}

node *Btree::search(int val, node *leaf) {
	if (leaf != NULL) {
		cout << "Current leaf is " << leaf->val << endl;
		if (val == leaf->val) {
			cout << "Foun the number" << endl;
			return leaf;
		}

		if (val < leaf->val) {
			cout << "Going into the LEFT" << endl;
			return search(val, leaf->left);
		} else {
			cout << "Going into the RIGHT" << endl;
			return search(val, leaf->right);
		}
	} else {
		cout << "Found NULL" << endl;
		return NULL;
	}
}

void Btree::insert(int val, node *leaf) {
	cout << "Current leaf is " << leaf->val << endl;
	if (val < leaf->val) {
		cout << "Going to LEFT leaf" << endl;
		if (leaf->left != NULL) {
			insert(val, leaf->left);
		} else {
			cout << "Setting " << val << " to as a LEFT leaf" << endl;
			leaf->left = new node;
			leaf->left->val = val;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
	} else if (val >= leaf->val) {
		cout << "Going to RIGHT leaf" << endl;
		if (leaf->right != NULL) {
			insert(val, leaf->right);
		} else {
			cout << "Setting " << val << " as a RIGHT leaf" << endl;
			leaf->right = new node;
			leaf->right->val = val;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
		}
	}
}

void Btree::destroy_tree(node *leaf) {
	if (leaf != NULL) {
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

int main() {
	Btree btree;
	btree.insert(7);
	btree.insert(4);
	btree.insert(2);
	btree.insert(1);
	btree.insert(3);
	btree.insert(5);
	btree.insert(12);
	btree.insert(10);
	btree.insert(13);
	btree.insert(8);
	btree.insert(9);
	
	node *found;
	found = new node;
	found = btree.search(9);
	cout << &found << endl;
	cout << found->val << endl;
}
