#include "LinkedStack.h"

void main()
{
	LinkedStack stack;
	stack.push(new Node(2000, "a", "computer"));
	stack.push(new Node(2001, "b", "science"));
	stack.push(new Node(2002, "c", "ballad"));

	stack.display();

	Node * node = stack.pop();
	node->display();
	cout << endl;
	delete node;
	stack.display();
}
