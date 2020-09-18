
#include "Node.h"
class LinkedList
{
private:
	Node * org;
public:
	LinkedList();
	~LinkedList();
	void clear();
	Node * getHead();
	bool isEmpty();

	void insert(int pos, Node * n);
	Node * remove(int pos);
	Node * getEntry(int pos);

	int size();
	void display();
};

