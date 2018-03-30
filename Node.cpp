#include "Node.h"
//Getters
Node* Node::next(){
	return next_;
} 

MesComplexes* Node::obj(){
	return obj_;
}

//Setters
void Node::set_obj(MesComplexes* C)
{
	obj_ = C;
}

//Constructor
//Default constructor

Node::Node()
{
    next_ = nullptr;
    obj_ = 0;
}
//Parameterized constructor
Node::Node(MesComplexes* complexe)
{
    next_ = nullptr;
    obj_ = complexe;
}
