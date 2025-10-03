#include <iostream>
#include "WordDecoder.hpp"


using namespace std;


WordDecoder::WordDecoder()
{
    // TODO. Initialize all variables required
    stackHead = nullptr;
}

WordDecoder::~WordDecoder()
{
    //TODO. Free up to avoid memory leaks
}

bool WordDecoder::isEmpty()
{
    // TODO. Checking if stack is empty
    return true;
}

void WordDecoder::push(string letter)
{
    //TODO Perform push operation stack
    
}

void WordDecoder::pop()
{
    //TODO Perform pop operation stack
    
}

Letter* WordDecoder::peek()
{
    //TODO Perform peek operation stack
    return nullptr;
}

void WordDecoder::evaluate(string* s, int size)
{
    /* TODO:
    1. Push to stack if lette rin string not a ")"
    2. If ")" comes, then pop until "(", store somewhere. Put letters back to the stack in reverse order of pop.
    3. Finally, the elements are stored in reverse, so print in reverse order. */
    
}