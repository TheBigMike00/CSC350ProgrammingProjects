#include "LinkedList.hpp"

LinkedList :: LinkedList()
{
    this->head = 0;
    this->count = 0;
}

PCB* LinkedList :: goToIndex(int index)
{
    PCB* currPCB = this->head;
    if(index == 0)
    {
        return currPCB;
    }
    else
    {
        while(index > 0)
        {
            currPCB = currPCB->getNextPCB();
            index--;
        }
    }
    return currPCB;
}

void LinkedList :: addEnd(PCB* p)
{
    if(this->count == 0)
    {
        this->head = p;
        this->count = 1;
    }
    else
    {
        goToIndex(count-1)->setNextPCB(p);
        this->count++;
    }
}

void LinkedList :: removeAtIndex(int index)
{
    if(this->count == 1)
    {
        this->head = 0;
    }
    else if(index == 0)
    {
        PCB* temp = goToIndex(1);
        this->head->setNextPCB(0);
        this->head = temp;
    }
    else if(index == (this->count -1))
    {
        goToIndex(index-1)->setNextPCB(0);
    }
    else
    {
        PCB* previous = goToIndex(index-1);
        PCB* next = goToIndex(index + 1);
        goToIndex(index)->setNextPCB(0);
        previous->setNextPCB(next);
    }
    this->count--;
}

void LinkedList :: display()
{
    if(this->count == 0)
    {
        std::cout<<" empty "<<"\n";
    }
    else
    {
        PCB* currPCB = this->head;
        int elements = this->count;
        while(elements > 0)
        {
            std::cout<<currPCB->getID()<<" ";
            currPCB = currPCB->getNextPCB();
            elements--;
        }
        std::cout<<"\n";
    }
}