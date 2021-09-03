#include<iostream>
#include<stdio.h>
#include"queuefortree.h"
using namespace std;
class Tree {

public:
	Node *root;
	Tree() {
		root = NULL;
	}
	void createTree() {
		Node  *p, *t = NULL;
		int element;
		Queueue q(100);
		cout << "enter the root value ";
		scanf_s("%d", &element);
		root = new Node;
		root->item = element;
		root->lchild = root->rchild = NULL;
		q.enqueue(root);
		while (!q.isEmpty()) {
			p = q.dequeue();
			cout << "enter the left node of "<<p->item<<" ";
			scanf_s("%d", &element);
			if (element != -1) {
				t = new Node;
				t->item = element;
				t->lchild = t->rchild = NULL;
				p->lchild = t;
				q.enqueue(t);
			}
			cout << "enter the right node of "<<p->item<<" ";
			scanf_s("%d", &element);
			if (element != -1) {
				t = new Node;
				t->item = element;
				t->lchild = t->rchild = NULL;
				p->rchild = t;
				q.enqueue(t);
			}
		}
	}
	void preorder(Node *p) {
		if (p) {
			cout << p->item<<" ";
			preorder(p->lchild);
			preorder(p->rchild);
		}
	}

};
int main() {
	Tree t;
	t.createTree();
	t.preorder(t.root);
	return 0;
}