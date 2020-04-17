#include <iostream>

using namespace std;

struct node {
	int key_value;
	node *left;
	node *right;
};

class Btree {
	public:
		Btree();
		~Btree();

		void insert(int key);
		node *search(int key);
		void destroy_tree();
	private:
		void insert(int key, node *leaf);
		void destroy_tree(node *leaf);
		node *search(int key, node *leaf);

		node *root;
};

Btree::Btree() {
	root = NULL;
}

Btree::~Btree() {
	destroy_tree();
}

void Btree::insert(int key, node *leaf) {
	if (leaf != NULL) {
		if (key < leaf->key_value) {
			insert(key, leaf->left);
		} else if (key >= leaf->key_value) {
			insert(key, leaf->right);
		}
	} else {
		leaf = new node;
		leaf->key_value = key;
		leaf->left = NULL;
		leaf->right = NULL;
	}
}

node *search(int key, node *leaf) {
	if (leaf->key_value == key) {
		return leaf;
	} else {
		if (key < leaf->key_value) {
			return search(key, leaf->left);
		} else if (key >= leaf->key_value) {
			return search(key, leaf->right);
		}
	}

	return NULL;
}

void Btree::destroy_tree(node *leaf) {
	if (leaf != NULL) {
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void Btree::insert(int key) {
	if (root != NULL) {
		insert(key, root);
	} else {
		root = new node;
		root->left = NULL;
		root->right = NULL;
	}
}

node *Btree::search(int key) {
	return search(key, root);
}

void Btree::destroy_tree() {
	destroy_tree(root);
}

int main() {
	Btree btree;
	btree.insert(5);
	btree.insert(10);
	btree.insert(3);
	btree.insert(4);

	cout << btree.search(3)->key_value;
}
