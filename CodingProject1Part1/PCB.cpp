#include "PCB.hpp"

PCB :: PCB(int ID)
{
    this->parent = 0;
    this->children = 0;
    this->nextPCB = 0;
    this->ID = ID;
}

PCB :: PCB(int ID, PCB* parent, LinkedList* childrenLL)
{
    this->parent = parent;
    this->children = childrenLL;
    this->nextPCB = 0;
    this->ID = ID;
}

int PCB :: getID()
{
    return this->ID;
}

PCB* PCB :: getNextPCB()
{
    return this->nextPCB;
}

void PCB :: setNextPCB(PCB* p)
{
    this->nextPCB = p;
}

void PCB ::setParent(PCB* parentPCB)
{
    this->parent = parentPCB;
}