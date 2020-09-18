
#include "ArrayList.h"

ArrayList::ArrayList() {
	length = 0;
}
ArrayList::~ArrayList() {

}
void ArrayList::insert(int pos, int e)
{
	if (!isFull() && pos >= 0 && pos < length)
	{
		for (int i = length; i >= pos; i--)
			data[i] = data[i - 1];
		data[pos] = e;
		length++;
	}
	else
		error("ERROR");
}

void ArrayList::remove(int pos)
{
	if (!isEmpty() && pos >= 0 && pos < length)
	{
		for (int i = pos + 1; i < length; i++)
			data[i - 1] = data[i];
		length--;
	}
	else
		error("ERROR");
}

int ArrayList::getEntry(int pos)
{
	return data[pos];
}

bool ArrayList::isFull()
{
	if (length == MAX_LIST_SIZE)
		return true;
	else
		return false;
}
bool ArrayList::isEmpty()
{
	if (length == 0)
		return true;
	else
		return false;
}
int ArrayList::size()
{
	return length;
}


void ArrayList::clear()
{
	length=0;
}

bool ArrayList::find(int item)
{
	for (int i = 0; i < length; i++)
	{
		if (data[i] == item)
			return true;
		else
			return false;
	}
}

void ArrayList::replace(int pos, int e)
{
	data[pos] = e;
}


void ArrayList::display()
{
}
