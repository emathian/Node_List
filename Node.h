#include "MesComplexes.h"
#ifndef NODE_H
#define NODE_H

class Node {
	public :

	friend class List; 

	protected  :
	
	Node* next_ ; 
	MesComplexes* obj_ ;
	
		
		//Constructor 

		//Default constructor
		Node();	
		//Parameterized constructor	
		Node(MesComplexes* complexe);
		Node* prev_; 
	
};
#endif