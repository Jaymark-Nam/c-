#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include "ArrayStackStudent.h"

using namespace std;

StudentStack::StudentStack()
{
	top = -1;
}

void StudentStack::push(Student x)
{
	if (isFull())
	{
		error("Stack Error");
	}
	top += 1;
	data[top] = x;
}
Student StudentStack::pop()
{
	if (isEmpty())
	{
		error("NULL error");
	}
	Student e = data[top];
	top -= 1;
	return e;
}
Student StudentStack::peek()
{
	if (isEmpty())
	{
		error("NULL error");
	}
	return data[top];
}

bool StudentStack::isFull()
{
	if (top == MAX_STACK_SIZE)
		return true;
	else
		return false;
}

bool StudentStack::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

void StudentStack::display()
{
	for (int i = 0; i <= top; i++) {
		cout << data[i];
	}
}


int main()
{
	StudentStack stack;
	Student s1(1000, "A", "computer");
	Student s2(1001, "B", "biology");
	Student s3(1002, "C", "history");

	stack.push(s1);
	stack.push(s2);
	stack.push(s3);
	stack.display();
	stack.pop();
	stack.display();

	return 0;
}