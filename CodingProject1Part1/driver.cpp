using namespace std;
#include "LinkedList.hpp"
#include "PCB.hpp"
#include <iostream>

void removeParent(PCB* arr[], int index)
{
    arr[index] = 0;
}

int main()
{

    LinkedList* parent1Children = new LinkedList();
    PCB* parent1 = new PCB(17, 0, parent1Children);
    PCB* p1 = new PCB(1);
    PCB* p2 = new PCB(2);
    PCB* p3 = new PCB(3);

    p1->setParent(parent1);
    p1->setNextPCB(p2);
    p2->setNextPCB(p3);

    parent1Children->addEnd(p1);
    parent1Children->addEnd(p2);
    parent1Children->addEnd(p3);
    
    LinkedList* parent2Children = new LinkedList();
    PCB* parent2 = new PCB(33, 0, parent2Children);
    PCB* p4 = new PCB(4);
    PCB* p5 = new PCB(5);

    p4->setParent(parent2);
    p4->setNextPCB(p5);
    parent2Children->addEnd(p4);
    parent2Children->addEnd(p5);


    LinkedList* parent3Children = new LinkedList();
    PCB* parent3 = new PCB(23, 0, parent3Children);
    PCB* p6 = new PCB(6);
    PCB* p7 = new PCB(7);

    p6->setParent(parent3);
    p6->setNextPCB(p7);
    parent3Children->addEnd(p6);
    parent3Children->addEnd(p7);

    PCB* parentArray [3] = {parent1, parent2, parent3};

}

