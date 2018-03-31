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

		(*current).next_ =  n; 
		(*n).next_ = nullptr;
		nb_elts_ ++;
	

		
	} 



}

void List::Popback()
{
	
	if ( head_== nullptr)
	{
		nb_elts_ = 0;
		head_ = nullptr;
	}	
	else
	{ 	
		Node *deletion = head_;
		
		while ((*deletion).next_ != nullptr)
		{
			deletion = (*deletion).next_;	
		}

		(*deletion).next_ = nullptr; 
	
		nb_elts_ --;
		delete deletion;
	}
}

void List::Insert(int pos, MesComplexes* insert_complex)
{	
	Node *n= new Node(insert_complex);
	//Node *before = new Node;
	
	//Node *temp = head_
	// If the list contains any node.
	if (pos == 0 && head_ == nullptr)
	{
		head_ = n ;
		(*n).next_ = nullptr; 
		nb_elts_ ++;
	}
	
	else if (pos == 0) // équivalent à ajouter au début
	{
		(*n).next_ = head_; 
		head_ = n;
		nb_elts_ ++;
	}

	else //if (pos == nb_elts_ + 1) 
	{
		
			Node *current = head_;
			int i=0;
			while (i <pos)
			{
			 	current = (*current).next_;
			 	i++; 
			}
			
			(*n).next_ = (*current).next_;
			(*current).next_ = n;
			nb_elts_ ++;
		
		
		
	}
}

