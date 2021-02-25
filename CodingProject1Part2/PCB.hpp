#include <iostream>

class PCB
{
    private:
        PCB* parent;
        PCB* child;
        PCB* youngerSibling; 
        PCB* olderSibling;
        int ID;

    public:
        PCB(int ID, PCB* parent, PCB* child);
        int getID();
        PCB* getyoungerSibling();
        void setChild(PCB* childPCB);
        void setyoungerSibling(PCB* p);
        void removePCB();
        void displayPCB();
};