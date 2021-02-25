#include "PCB.hpp"

int main()
{
    PCB* parent1 = new PCB(23, 0, 0);
    PCB* parent2 = new PCB(24, 0, 0);
    PCB* parent3 = new PCB(33, 0, 0);
    parent1->setyoungerSibling(parent2);
    parent2->setyoungerSibling(parent3);

    PCB* p1 = new PCB(1, parent1, 0);
    parent1->setChild(p1);
    PCB* p2 = new PCB(2, 0, 0);
    p1->setyoungerSibling(p2);

    PCB* p3 = new PCB(3, parent2, 0);
    parent2->setChild(p3);

    PCB* p4 = new PCB(4, parent3, 0);
    parent3->setChild(p4);

    parent1->displayPCB();
    parent2->removePCB();
    parent1->displayPCB();
    parent3->displayPCB();
}