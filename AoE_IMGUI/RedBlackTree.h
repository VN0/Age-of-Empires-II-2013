#pragma once

#include <Windows.h>
#include <queue>
#include <iostream>

using namespace std;

enum Color { RED, BLACK };

class Segment;
struct Node
{
	Segment* data;
	bool color;
	Node *left, *right, *parent;

	// Constructor 
	Node(Segment* data)
	{
		this->data = data;
		left = right = parent = NULL;
		this->color = RED;
	}
};

// Class to represent Red-Black Tree 
class RBTree
{
private:
	Node *root;
protected:
	void rotateLeft(Node *&, Node *&);
	void rotateRight(Node *&, Node *&);
	void fixViolation(Node *&, Node *&);
public:
	// Constructor 
	RBTree() { root = NULL; }
	void insert(Segment* n);
	void inorder();
	void levelOrder();
};
