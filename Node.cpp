#include "Node.h"
Node* Node::next(){
	return next_;
} 


MesComplexes* Node::obj(){
	return obj_;
}

void Node::set_obj(MesComplexes* C)
{
	obj_ = C;
}


