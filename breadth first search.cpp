#include <iostream>
#include<conio.h>
#include<queue>
using namespace std;
	struct node {
	public:
		int item;
		node *left,*right;
	};
	void printlevel(node *root) {
		if (root == NULL) return;
		queue<node*>q;
		q.push(root);
		while (!q.empty()) {
			node *newnode = q.front();
			cout << newnode->item << " ";
			q.pop();
			if (newnode->left != NULL) 
				q.push(newnode->left);
			
			if (newnode->right != NULL)
				q.push(newnode->right);
		}


	}
	node *newwnode(int element) {
		node *temp = new node;
		temp->item = element;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	
	}
	void main() {
		node *root = newwnode(1);
		root->left = newwnode(2);
		root->right = newwnode(3);
		root->left->left = newwnode(4);
		root->left->right = newwnode(5);
		cout << " the lebel order is = \n";
		printlevel(root);
		_getch();
	}