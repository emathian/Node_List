#include "Node.h"
Node* Node::next(){
	return next_;
} 


MesComplexes* Node::obj(){
	return obj_;
}

void MesComplexes::set_obj(MesComplexes* obj)
{
	obj_ = obj;
}


void MesComplexes::set_next(MesComplexes* next)
{
	next_ = next;
}