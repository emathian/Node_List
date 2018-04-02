#include "Node.h"
#ifndef LIST_H
#define LIST_H

/*The class List allows to users to build a double linked list, a serie of objects linked with the previous and the next elements.
 These doubles lists are built using Nodes objects. Like this each element is a Node, that's it to say a object containing the address 
 of a complex number, and the addresses of the previous and the next nodes if they exist. Otherwise users could access to the number of
 elements contained by the list and to the address of the head of this list.*/
class List {

	public:
	// Attributes declaration
	/* List objects have two attributes, firstly a head which is the address of the first element and number of elements contained 
	in the list.*/ 
	Node * head_;
	int  nb_elts_;

	public:
	// Getters
	// Users could access to each the attributes.	
	Node * head();
	int nb_elts();

	//Constructor
	//Default Constructor
	List();
	//Parameterized constructor
	//A list could be built passing to a list object the adress of a complex number. This one will be the first element of the list.
	List(MesComplexes* C); 
	
	//Methods

	//The method Pushback allows to add a complex number at the end of a linked list passing as parameter the address of a complex number
	void Pushback(MesComplexes* add_complex);

	//The method Popback allows to remote the last a complex number contained in a list.
	void Popback();

	/*Like Pushback method, the method Insert allows to add a complex number at the end of a linked list. A complex number could be also
	placed to the beginning of the list. In this case head is reinitialized, like this the new value contained in head attribute is equal 
	to the adress of the complexe number which has just be added. A complexe number could be added in any position in a linked list. Notice that
	this method allows to insert a complex number after the position indicated by pos argument. Finally note that if you want to insert a element 
	after the end of the linked list, this one will be  placed to the end. For exemple if a list contain 3 elements, if we want to insert a new element 
	in position 10, the programme will insert this element in position 4th, given that the list contain 4 elements.
	Notice : We count from zero. */
	void Insert(int pos, MesComplexes* insert_complex);

	/*The method Display allows to print the attribute obj_ of each Node contained in a linked list, scanning the list from the beginning.*/
	void Display();
};

#endif

