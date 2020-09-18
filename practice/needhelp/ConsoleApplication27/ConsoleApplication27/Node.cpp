#include "Node.h"


Node::Node(int val = 0) :data(val), link(NULL)
{
}
Node * Node::getLink()
{
	return link;
}

void Node::setLink(Node * next)
{
	link = next;
}
void Node::display()
{
	cout << "<" << data << ">" << endl;
}
bool Node::had(int val)
{
	if (data == val)
		return true;
	else
		return false;
}
void Node::insertNext(Node * n)
{
	if (n != NULL)
	{
		n->link = link;
		link = n;
	}
}

Node * Node::removeNext()
{
	Node * removed = link;
	if (removed != NULL);
	link = removed->link;
	return removed;
}