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
//Copy constructor
// Pour moi : This constructor allow to user to create a Node object containning the same object stocked to the same adress than the node_model
Node::Node(const Node & node_model)
{
    next_ = node_model.next_;
    obj_ = node_model.obj_;
}
