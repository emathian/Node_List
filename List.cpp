#include "List.h"
#include <iostream>
using namespace std;

// Getters
/* This getter allow to users to access to the atribute "head" which is a pointer directed on the 
first element of my list.*/
Node* List::head()
{
	return head_;
} 
/* This getter allow to users to access to the atribute "obj"*/	
int List::nb_elts()
{
	return nb_elts_;
}	

//Constructor 
//Default constructor
List::List()
{
	head_ = nullptr;
	nb_elts_ = 0;
}
