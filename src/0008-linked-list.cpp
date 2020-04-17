#include <iostream>

using namespace std;

/**
 * Follows the examples from https://www.cprogramming.com/tutorial/lesson15.html
 * This code is different in a manner I tried to create a function that creates
 * a new node so I can easily make longer linked list.
 */
struct node {
	int x;
	node *next;
};

node* addNode(node *currentNode, int value);

int main() {
	int i = 42;
	node *root;
	root = new node;
	root->next = 0;
	root->x = 5;

	// walk the conductor to the end of the linked list.
	node *conductor;
	conductor = root;

	if (conductor != 0) {
		while (conductor->next != 0) {
			conductor = conductor->next;
		}
	}

	conductor->next = 0;
	conductor->x = i++;

	// then add some more nodes
	conductor = addNode(conductor, i++);
	conductor = addNode(conductor, i++);
	conductor = addNode(conductor, i++);
	conductor = addNode(conductor, i++);
	conductor = addNode(conductor, i++);
	conductor = addNode(conductor, i++);

	// not walk the linked list and print every value
	// start from root..
	conductor = root;

	if (conductor != 0) {
		while (conductor->next != 0) {
			cout << " Node's value is: " << conductor->x << endl;
			conductor = conductor->next;
		}
	}
	// print the last value
	cout << " The last value is: " << conductor->x << endl;
}

node* addNode(node *currentNode, int value) {
	node *newNode;
	newNode = new node;
	newNode->next = 0;
	newNode->x = value;
	currentNode->next = newNode;
	
	return newNode;
}

