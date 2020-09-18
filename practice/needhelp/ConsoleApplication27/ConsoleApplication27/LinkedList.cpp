#include "LinkedList.h"

LinkedList::LinkedList() :org(0) {

}
LinkedList::~LinkedList() {
	clear();
}
void LinkedList::clear()
{
	while (!isEmpty())
		delete remove(0);
}
Node * LinkedList::getHead()
{
	return org->getLink();
}
bool LinkedList::isEmpty()
{
	if (getHead() == NULL)
		return true;
	else
		return false;
}

Node * LinkedList::getEntry(int pos)
{
	Node * n = &org;
	for (int i = -1; i < pos; i++, n = n->getLink())
		if (n == NULL) break;
}

void LinkedList::insert(int pos, Node * n)
{
	Node * prev = getEntry(pos - 1);
	if (prev != NULL)
		prev->insertNext(n);
}
Node * LinkedList::remove(int pos)
{
	Node * prev = getEntry(pos - 1);
	return prev->removeNext();
}

int LinkedList::size()
{
	int size = 0;
	for (Node * p = getHead(); p != NULL; p = p->getLink())
		size++;
	return size;
}

void LinkedList::display()
{
	cout << "전체 항목수 =" < size() << "<<endl;
	for (Node * p = getHead(); p != NULL; p = p->getLink())
			p->display();
	cout << endl;
}
