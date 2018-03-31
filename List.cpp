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

//Parameterized constructor	


List::List(int number_elements) 
{
	head_ = nullptr;
	nb_elts_ = number_elements;
}



//Methods
void List::Pushback(MesComplexes* add_complex)
{
	Node *n  = new Node(add_complex); //Create a tempory node
	Node *current = head_;

	if ( head_ == nullptr)
	{
		head_ = n;
		current = n;
		nb_elts_ ++;
		(*current).next_ = nullptr; 

	}
	
	else
	{
	
		//l'attribut next du noeud != null ptr
		while((*current).next_ != nullptr)
		{
		current = (*current).next_;
		}

		(*current).next_ = n; 
		(*n).next_ = nullptr;
		nb_elts_ ++;
		//cout << (*n).obj_ << endl;

		
	} 

}

