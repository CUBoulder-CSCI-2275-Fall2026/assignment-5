#include "WaitlistQueue.hpp"

using namespace std;

WaitlistQueue::WaitlistQueue(int qSize)
{
    /* Already implemented, don't change */
    qFront = qEnd = -1;
    qCapacity = qSize;
    queue = new string[qSize];
}

WaitlistQueue::~WaitlistQueue()
{
    //TODO
}

void WaitlistQueue::enqueue(string value)
{
    //TODO
}

void WaitlistQueue::dequeue()
{
    //TODO
}

string WaitlistQueue::peek()
{
    //TODO
    return "";
}

void WaitlistQueue::resize(int newSize)
{
    //TODO
}

int WaitlistQueue::size()
{
    //TODO
    return 0;
}

int WaitlistQueue::capacity()
{
    //TODO
    return 0;
}

bool WaitlistQueue::isEmpty()
{
    //TODO
    return true;
}

bool WaitlistQueue::isFull()
{
    //TODO
    return false;
}