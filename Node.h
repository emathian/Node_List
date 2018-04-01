#include "MesComplexes.h"
#ifndef NODE_H
#define NODE_H

/* The class Node could be use only by the class List. This class with the class List allow to create a linked list.
Like this Node is the first part of a two component programm. It allows to keep in memory and an object's memory adress,
which refers in this case to a complexe number. In addition a node contains the next node's memory adress, which is null 
if this node is the last one. */

class Node {
	public :
		// The class Node could be use only by the friend class List, which could access to protected members of Node. 
	friend class List; 

	protected  :
		// Attribute declaration
		MesComplexes* obj_ ;// The attribute obj_ contains the adress of a complex number.
		Node* next_ ; // The attribute next_ contains the adress of the next node.
		Node* prev_; // The attribute prev_ contains the adress of the previous node.

		//Getters 
		// Because the access to Node class's members are protected, and because List doesn't need getters, we assume to don't write getters. 
			
		//Setters
		// Given that List doesn't require setters, we don't construct them.

		//Constructor 

		//Default constructor
		Node();	
		//Parameterized constructor	
		//A Node could be constructed passing the adress of a complex number as parameter.
		Node(MesComplexes* complexe);
		// Copy constructor
		// The class list doesn't require copy constructor.
};
#endif