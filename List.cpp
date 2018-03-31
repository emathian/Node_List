#include "List.h"
#include <iostream>
using namespace std;

// Getters
/* This getter allow to users to access to the atribute "head_" which is a pointer directed on the 
first element of my list. We could also access to the number of elements containing by our list with the 
attribute nb_elts_.  */
Node* List::head()
{
	return head_;
} 

int List::nb_elts()
{
	return nb_elts_;
}	

//Setters 
/* This class contains any setter, indeed the attributes values depends on list manipulation. Like this users can't 
change this parameter compute automatically.*/

//Constructor 

List::List()
{
	head_ = nullptr;
	nb_elts_ = 0;
}

//Parameterized constructor	


List::List(MesComplexes* C) 
// a changer

{	Node* n = new Node(C);
	head_ = n;
	nb_elts_ = 1;
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
		(*current).prev_ = nullptr;

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
		(*n).prev_ = current;
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
		Node *before = new Node;
		Node *current = head_;
		while ((*current).next_ != nullptr)
		{
			before = current;
			current = (*current).next_;	
		
		}

		(*before).prev_ = (*current).prev_;
		(*before).next_ = nullptr;
		current = (*current).next_;	
		
		nb_elts_ --;
		delete current;
	}
}

void List::Insert(int pos, MesComplexes* insert_complex)
{	
	Node *n= new Node(insert_complex);
	
	
	//Node *temp = head_
	// If the list contains any node.
	if (pos == 0 && head_ == nullptr)
	{
		head_ = n ;
		(*n).next_ = nullptr; 
		(*n).prev_ = nullptr; 
		nb_elts_ ++;
	}
	
	else if (pos == 0) // équivalent à ajouter au début
	{
		(*n).next_ = head_; 
		(*n).prev_ = nullptr; 
		head_ = n;
		nb_elts_ ++;
	}

	else //if (pos == nb_elts_ + 1) 
	{
		if (pos >= nb_elts_)
		{
			Node *current = head_;
			while((*current).next_ != nullptr)
			{
				current = (*current).next_;
			}

			(*current).next_ = n; 
			(*n).next_ = nullptr;
			(*n).prev_ = current;
			nb_elts_ ++;
		}

		else
		{	
			Node *current = head_;
			int i=0;
			while (i <pos)
			{
			 	current = (*current).next_;
			 	i++; 
			}
			(*n).prev_ = current;
			(*n).next_ = (*current).next_;
			(*current).next_ = n;
			nb_elts_ ++;
		}
		
		
	}



}

	void List::Display()
	{
		Node *current = new Node;
		current = head_;
		if ((*current).next_ == nullptr)
		{
			cout << (*current).obj_ << endl;
		}
		else
		{
			while ((*current).next_ != nullptr )
			{
				std::cout<<(*current).obj_<<std::endl;
				current=(*current).next_;
    		}
    		std::cout<<(*current).obj_<<std::endl;
   		}
   	}	

