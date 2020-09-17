#pragma once
#include "Node.h"

class LinkedStack
{
private:
	Node * top;
public:
	LinkedStack();
	~LinktedStack();
	void push(Node * p);
	Node * pop();
	Node *peek();
	bool isEmpty();
};

