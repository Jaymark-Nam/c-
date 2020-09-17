#include "LinkedStack.h"

LinkedStack::LinkedStack()
{
	top = NULL;
}
LinkedStack::~LinkedStack()
{
	while (! isEmpty())
		delete pop();
}
void LinkedStack::push(Node * p)
{
	if (isEmpty())
		top = p;
	else
	{
		p->setLink(top);
		top = p;
	}
}

Node * LinkedStack::pop()
{
	if (isEmpty())
		return NULL;
	else
	{
		Node * p = top;
		top = p->getLink();
		return p;
	}
}


Node * LinkedStack::peek()
{
	if (isEmpty())
		return NULL;
	else
		return top;
}
bool LinkedStack::isEmpty()
{
	return top == NULL;
}
