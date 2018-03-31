#include "Node.h"
#include <iostream>
using namespace std;

// This file contains necessary code to buid Node objects.

// Getters
// None

// Setters
// None

// Constructors 

// Default constructor 
/* We initialize next_ and prev_ attributes with default values equal to a null address (nullptr). 
The attribute obj_ is initialiazed to zero */

Node::Node()
{
    next_ = nullptr;
    prev_ = nullptr;
    obj_ = 0;
}
// Parameterized constructor	
// Owing to this constructor we could build a Node object passing a complex number's address as parameter. 
Node::Node(MesComplexes* complexe)
{
	prev_ = nullptr;
    next_ = nullptr;
    obj_ = complexe;
}
