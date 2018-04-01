#include "Node.h"
#ifndef LIST_H
#define LIST_H

/*The class List allows to users to build a double linked list, a serie of objects linked with the previous and the next elements.
 These doubles lists are built using Nodes objects. Like this each element is a Node, that's it to say a object containing the adress 
 of a complex number, and the adresses of the previous and the next ones if they exist. Users could access to the number of elements 
 contained by the list and to the address of the head. */
class List {

	public:
	// Attribute declaration
	/* List objects have two attribute, firstly a head which is the adress of the first element and number of elements contained 
	in the list.*/ 
	Node * head_;
	int  nb_elts_;

	public:
	//Getters
	// Users could access to the attributes.	
	Node * head();
	int nb_elts();

	//Constructor
	//Default Constructor
	List();
	//Parameterized constructor
	//A list could be build passing to a list object the adress of a complex number. This one will be the first element of the list.
	List(MesComplexes* C); 
	
	//Methods

	/*The method Pushback allows to add a complex number at the end of a linked list passing as parameter the address of the target 
	complex number*/
	void Pushback(MesComplexes* add_complex);

	//The method Popback allows to remote the last a complex number.
	void Popback();

	/*Like Pushback method, the method Insert allows to add a complex number at the end of a linked list. A complex number could be also
	placed to the beginning of the list. In this case head is reinitialized, like this the new value contained in head attribute is equal 
	to the adress of the complexe number which has just be add. A complexe number could be add in any position in a linked list. Notice that
	the complex number to insert will be add after the one in the current position. For example if a list contains 3 elements, and if you wanted
	to insert a new element in positon 2, the current element in position 2 will be placed in position 1 and the current element in position 3
	will be placed in position 4. Finally note that if you want to insert a element after the end of the linked list, this one will be placd to
	the end. Go back to our exemple, if we want to insert a element in position 10, the programme will insert this element in position 5, given that 
	the list contain 4 elements.
	Notice : we count from zero. */
	void Insert(int pos, MesComplexes* insert_complex);

	/*The method Display allows to print the attribute obj_ of each Node contained in a linked list, scanning the list from the beginning.*/
	void Display();
};

#endif

