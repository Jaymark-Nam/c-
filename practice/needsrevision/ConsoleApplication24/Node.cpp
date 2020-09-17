#include "Node.h"

Node(int id, char * name, char * dept):Student(id, name, dept)
{
	link = NULL;
}
~Node(void)
{

}

Node * getLink()
{
	return link;
}

void setLink(Node * p)
{
	link = p;
}