#include "MesComplexes.h"
#ifndef NODE_H
#define NODE_H

/* The class Node could be used only by the class List. The class Node with the class List allow to create a doubly linked list.
Like this Node is the first part of a two-component program. This program allows to keep in memory a List of complex numbers' memory
addresses. In addition given that a node contains the previous and the next nodes' memory addresses, we know the position of first the last 
elments because in this case attributes prev_ and next_ are null. */

class Node {
	public :
		// The class Node could be use only by the friend class List, which could access to protected members of Node. 
	friend class List; 

	protected  :
		// Attributes declaration
		MesComplexes* obj_ ;// The attribute obj_ contains the address of a complex number.
		Node* next_ ; // The attribute next_ contains the address of the next node.
		Node* prev_; // The attribute prev_ contains the address of the previous node.

		//Getters 
		// Because the access to Node class's members are protected, and because List doesn't need getters, we assume to don't write getters. 
			
		//Setters
		// Given that List doesn't require setters, we don't construct them.

		//Constructor 

		//Default constructor
		Node();	
		//Parameterized constructor	
		//A Node could be constructed passing the address of a complex number as parameter.
		Node(MesComplexes* complexe);
		// Copy constructor
		// The class list doesn't require copy constructor.
};
#endif