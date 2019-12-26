#include <iostream>
#include "Queue.h"

Queue::Queue()
{
	Front = -1;
	Rear = -1;
}

Queue::~Queue() {}

void Queue::enqueue(char element)
{
	if (isFull())
	{
		std::cout << "Cannot enqueu"
				  << " element, Queue Overflow\n";
	}
	else
	{
		Rear++;
		myQueue[Rear] = element;
	}
}

char Queue::dequeue()
{
	if (isEmpty())
	{
		std::cout << "Queue is empty, Queue underflow \n";
		return 0;
	}
	else
	{
		Front++;
		char val = myQueue[Front];
		return val;
	}
}

char Queue::rear()
{
	if (isEmpty())
	{
		std::cout << "Queue is empty, Queue underflow \n";
		return 0;
	}

	else
	{
		return myQueue[Rear];
	}
}

bool Queue::isEmpty()
{
	if (Rear == Front)
	{
		std::cout << "Queue is empty";
		return true;
	}
	else
	{
		return false;
	}
}

bool Queue::isFull()
{
	if (Rear >= MAX - 1)
	{
		std::cout << "Queue is full";
		return true;
	}
	else
	{
		return false;
	}
}

char Queue::front()
{
	if (isEmpty())
	{
		std::cout << "Queue is empty, Queue underflow \n";
		return 0;
	}
	else
	{
		return myQueue[Front];
	}
}

int main()
{
	Queue a;
	a.enqueue('A');
	a.enqueue('M');
	a.enqueue('A');
	a.enqueue('R');
	std::cout << a.rear() << std::endl;
}
