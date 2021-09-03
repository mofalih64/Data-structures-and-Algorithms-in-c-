#include<iostream>
#include<conio.h>
using namespace std;
class tree {
	struct node {
		int item;
		node *left;
		node *right;
	};
	node *root;
public:
	tree() {
		root = NULL;
	}
	void add(int element) {
		insert(root, element);
	}
	void newnode(int element) {
		node *newnode = new node;
		newnode->item = element;
		newnode->left = newnode->right = NULL;
	}
	void insert(node *root,int element) {
		
		if (root == NULL) {
			newnode(element);
		}
		else 
			if ( root->item <= element  )
			{
				insert(root->left, element);
			}
			else {
				insert(root->right, element);
			}
		
	}
	bool search(node *p, int element) {
		if (p == NULL) { return false; }

		else if (p->item == element) 
		{ return true; 
		}
		else if (root->item >= element)
		{
			return search(root->left, element);
		}
		else {
			return search(root->right, element);
		}
	}
	bool look(int element) {
		return search (root, element);
	}
};
void main() {
	tree s;
	s.add(15);
	s.add(10);
	s.add(20);
	cout << "enter the number ";
	int num;
	cin >> num;
	if (s.look(num)==true) {
		cout << "found";
	}
	else {
		cout << " not found !!";
	}
	_getch();
}