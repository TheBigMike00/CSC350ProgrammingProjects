#include "PCB.hpp"

PCB :: PCB(int ID, PCB* parent, PCB* childPCB)
{
    this->parent = parent;
    this->child = childPCB;
    this->youngerSibling = 0;
    this->olderSibling = 0;
    this->ID = ID;
}

int PCB :: getID()
{
    return this->ID;
}

PCB* PCB :: getyoungerSibling()
{
    return this->youngerSibling;
}

void PCB :: setyoungerSibling(PCB* p)
{
    this->youngerSibling = p;
    p->olderSibling = this;
}

void PCB ::setChild(PCB* childPCB)
{
    this->child = childPCB;
}

void PCB :: removePCB()
{
    if(this->olderSibling == 0 && this->parent == 0)
    {
        std::cout<<"This action would destroy all PCBs"<<"\n";
    }
    else if(this->olderSibling == 0 && this->parent != 0)
    {
        std::cout<<"test1\n";
        this->youngerSibling = 0;
        this->parent->setChild(0);
    }
    else if(this->youngerSibling == 0)
    {
        std::cout<<"test2\n";
        this->olderSibling->youngerSibling = 0;
    }
    else
    {
        PCB* youngTemp = this->youngerSibling;
        PCB* oldTemp = this->olderSibling;
        std::cout<<"test3\n";
        oldTemp->setyoungerSibling(youngTemp);
        std::cout<<"test3\n";
        //oldTemp->youngerSibling = youngTemp; 
    }
}

void PCB :: displayPCB()
{
    std::cout<<"PCB ID: "<<this->ID<<"\n";
    if(this->parent != 0)
    {
        std::cout<<"Parent: "<<this->parent->getID()<<"\n";
    }
    else
    {
         std::cout<<"No Parent\n";
    }

    if(this->child != 0)
    {
        std::cout<<"Child: "<<this->child->getID()<<"\n";
    }
    else
    {
         std::cout<<"No Child\n";
    }

    if(this->olderSibling != 0)
    {
        std::cout<<"Older Sibling: "<<this->olderSibling->getID()<<"\n";
    }
    else
    {
         std::cout<<"No Older Sibling\n";
    }

    if(this->youngerSibling != 0)
    {
        std::cout<<"Younger Sibling: "<<this->youngerSibling->getID()<<"\n";
    }
    else
    {
         std::cout<<"No Younger Sibling\n";
    }
}