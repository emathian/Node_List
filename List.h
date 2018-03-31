#include "Node.h"

#ifndef LIST_H
#define LIST_H

class List {

	public:
	// ATTENTION A CHNAGER
	//protected  :
	Node * head_;
	int  nb_elts_;

	public:
	//Getters
	Node * head();
	int nb_elts();

	//Constructor
	//Default Constructor
	List();
	List(int number_elements);
	//Method
	void Pushback(MesComplexes add_complex);

};

#endif

