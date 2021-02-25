#include <iostream>
#ifndef PCB_hpp
#define PCB_hpp
#include "LinkedList.hpp"
class LinkedList;


class PCB
{
    private:
        PCB* parent;
        LinkedList* children;
        PCB* nextPCB; 
        int ID;

    public:
        PCB(int ID);
        PCB(int ID, PCB* parent, LinkedList* children);
        int getID();
        PCB* getNextPCB();
        void setParent(PCB* parentPCB);
        void setNextPCB(PCB* p);
};
#endif