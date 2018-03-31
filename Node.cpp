#include "Node.h"


//Constructor
//Default constructor

Node::Node()
{
    next_ = nullptr;
    prev_ = nullptr;
    obj_ = 0;
}
//Parameterized constructor
Node::Node(MesComplexes* complexe)
{
	prev_ = nullptr;
    next_ = nullptr;
    obj_ = complexe;
}
