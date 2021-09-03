#include<iostream>
#ifndef queuefortree
#define queuefortree
using namespace std;
class Node {
public:
	Node *lchild;
	int item;
	Node *rchild;
};
class Queueue {
private:
	int front;
	int rear;
	int size;
	Node **Q;
public:
	Queueue() {
		front = rear = -1;
		size = 10;
		Q = new Node*[size];
	}
	Queueue(int size) {
		front = rear = -1;
		this->size = size;
		Q = new Node*[this->size];
	}
	void enqueue(Node *x) {
		if (rear == size - 1) {
			cout << " fullllllllll";
		}
		else {
			rear++;
			Q[rear] = x;
		}
	}
	Node *dequeue() {
		Node *x = NULL;


		x = Q[front + 1];
		front++;

		return x;
	}
	int isEmpty() {
		return front == rear;
	}
};
#endif
