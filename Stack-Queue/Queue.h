#ifndef QUEUE_H
#define QUEUE_H

#define MAX 7
class Queue
{
private:
    char myQueue[MAX];
    int Front;
    int Rear;
    char element;

public:
    Queue();
    ~Queue();

    void enqueue(char element);
    char dequeue();
    char front();
    char rear();
    bool isEmpty();
    bool isFull();
};

#endif
