#include<iostream>
using namespace std;
struct Node {
	Node *leftnode;
	Node *rightnode;
	int item;

}*root = NULL;
	void insert(int element) {
		Node *t = root;
		Node*r=NULL,*p;
		if (root == NULL) {
			p = new Node;
			p->item = element;
			p->leftnode = p->rightnode = NULL;
			root = p;
				return;
		}
		while (t!= NULL) {
			r = t;
			if (t->item < element)
				t = t->leftnode;
			else if (t->item > element)
				t = t->rightnode;
			else
				return;
		}
		p = new Node;
		p->item = element;
		p->leftnode = p->rightnode = NULL;
		if (r->item < element)
			r->leftnode = p;
		else r->rightnode = p;
	}
	void inorder(Node *p) {
		inorder(p->leftnode);
		cout << p->item;
		inorder(p->rightnode);
	}
	Node* search(int key)
	{
		Node *t = root;
		while (t != NULL) {
			if (t->item == key) {
				
				return t;
			}
			else if (t->item > key) {
				t = t->leftnode;
			}
			else {
				t = t->rightnode;
			}
		}
		return NULL;
	}


int main() {
	
	Node *temp;
	insert(20);
	insert(10);
	insert(30);
	insert(40);
	temp = search(20);
	if (temp != NULL)
		cout << " the element " << temp->item << "is found";
	else
		cout<<"element is not found\n";
	return 0;
}