#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "PCB.hpp"
class PCB;

class LinkedList
{
    private:
        PCB* head;
        int count;
        PCB* goToIndex(int index);
        

    public:
        LinkedList();
        void addEnd(PCB* p);
        void removeAtIndex(int index);
        void display();

};
#endif