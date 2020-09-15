#include <iostream>
#include <fstream>
#include <istream>
#include <string>

#include "Arraystack.h"

Arraystack::Arraystack()
{
	top = -1;
}

void Arraystack::push(int x)
{
	if (isFull())
	{
		error("Stack Error");
	}
	top += 1;
	data[top] = x;
}

int Arraystack::pop()
{
	if (isEmpty())
	{
		error("Stack NULL error");
	}
	int e = data[top];
	top -= 1;
	return e;
}


int Arraystack::peek()
{
	if (isEmpty())
	{
		error("Stack error");
	}
	return data[top];
}

bool Arraystack::isFull()
{
	if (top == MAX_STACK_SIZE)
		return true;
	else
		return false;
}
bool Arraystack::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}
int Arraystack::size()
{
	return top;
}
int main() {
	return 0;
}