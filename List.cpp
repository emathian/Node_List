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
// Default constructor 
/* We initialize head_ attribute with default values equal to a null address (nullptr). 
Obviously nb_elts_ is initialized to zero. */
List::List()
{
	head_ = nullptr;
	nb_elts_ = 0;
}

//Parameterized constructor	
/* This constructor allows to users to create a new list by passing by parameter the address of a complex number.
The programm allocates memory to create a new Node, n points to this new node. The attribute Head is iniatialize
to n. Finally we increment nb_elmts_ by one. 

Preconditions: C is a complex number
Postconditions: address of head is eaqual to n. The number of element is eqaul to one. */
List::List(MesComplexes* C) 
{	Node* n = new Node(C);
	head_ = n;
	nb_elts_ = 1;
}

//Copy constructor
//None

//Methods

/*The method Pushback allows to add a complexe number at the end of a List.
Preconditions: add_complex is a complex number, this parameter is passed by address.
Postconditions: After execution of Pushback method the last element is a node containing the complexe to add.
The attribute next is then equal to nullptr, and its attibute prev to the second last node. Obviouslisy we increase 
the number of elements by one.*/
void List::Pushback(MesComplexes* add_complex)
{	
	//Allocation of  memory to create a new Node containing the complexe number to add. n is a pointer to this new node
	Node *n  = new Node(add_complex); 
	// initialization of a pointer (current) wich points to the head
	Node *current = head_;

	// If the list is empty, then head is equal to nullptr, and so we create a new list.
	if ( head_ == nullptr)
	{
		head_ = n;
		current = n;
		nb_elts_ ++;
	}
	
	// Otherwise the list isn't empty.
	else
	{
		// We cross the list until to find the last element. 
		while((*current).next_ != nullptr)
		{
			current = (*current).next_;
		}
		// Attribute next of the last Node (current) takes the value of n.
		(*current).next_ =  n; 
		/* n is now the last node, so its attribute next is equal to nullptr, and its attribute prev is equal to the second last
		 Node either current. */
		(*n).next_ = nullptr;
		(*n).prev_ = current;
		nb_elts_ ++;
	
	} 
}

/*The method Popback allows to delete the last element of a list.
Preconditions: Anyone, this function forecasts the case of an empty list.
Postconditions: After execution of Popback we delete the last Node.*/
void List::Popback()
{
	/* If the list is empty we can't remote any element, so head_ keep the value nullptr and the number 
	of element is still equal to zero. */
	if ( head_== nullptr)
	{
		nb_elts_ = 0;
		head_ = nullptr;
	}	
	// Otherwise the list isn't empty.
	else
	{ 
		//Allocation of memory to create a new Node. before is a pointer to this new node, we will use it			
		Node *before = new Node;
		// initialization of a pointer (current) wich points to the head
		Node *current = head_;
		// We cross the list until to find the last element. 
		while ((*current).next_ != nullptr)
		{
			// before at the end of the loop points on the second last element
			before = current;
			current = (*current).next_;	
		}
		// The attribute previous of before node is set equal to the one of current.
		(*before).prev_ = (*current).prev_;
		// Before node is define as the last, setting its next attribute to nullptr.
		(*before).next_ = nullptr;
		// We delete the Node current.
		delete current;
		// We decrease the number of element by one.
		nb_elts_ --;
	}
}

/*The method Insert allows to Insert a new at anyposition.
Preconditions: We count position of elements from zero. pos is the parameter defining the position of the insertion.
							 insert_complex is the complex number to insert.
Postconditions: 1) If pos==0 and the list is empty, we create a new one wich contain the complex to insert.
								2) If pos > 0 but the list is empty, we take into account this mistake and we create a new list wich contain
									 the complex to insert.
								3) If pos==0, then we insert a new element to the beginning. So the head_ is redefined as the insertion.
								4) If pos is between the beginnig and the end of the List, we insert the complex after the position. 
								5) If pos is higher than the length of the list, the insertion is realised at the end of the list. */
void List::Insert(int pos, MesComplexes* insert_complex)
{	
	//Allocation of  memory to create a new Node containing the complexe number to add. n is a pointer to this new node
	Node *n= new Node(insert_complex);
	// If the list is empty then the only position possible zero
	if (pos == 0 && head_ == nullptr)
	{
		head_ = n ;
		// Given that n is the only element in the list the attributes previous and next are equal to nullptr.
		(*n).next_ = nullptr; 
		(*n).prev_ = nullptr; 
		nb_elts_ ++;
	}
	// If the list is empty but pos > 0, we correct this mistake. Like this we create a new list containning just one element. 
	else if (pos!=0 && head_ == nullptr)
	{
		head_ = n ;
		(*n).next_ = nullptr; 
		(*n).prev_ = nullptr; 
		nb_elts_ ++;
	}
	// If the list isn't empty and pos==0 we insert a new element to the head.
	else if (pos == 0) 
	{
		//The Head becomes the second node.
		(*n).next_ = head_; 
		// n is the first node
		(*n).prev_ = nullptr; 
		// We redefine n as the head of the list
		head_ = n;
		nb_elts_ ++;
	}

	else 
	{
		// If by mistake we want to insert a element after the head, this element is inserted to the end.
		if (pos >= nb_elts_)
		{
			// initialization of a pointer (current) wich points to the head
			Node *current = head_;
			// We cross the list until to find the last element. 
			while((*current).next_ != nullptr)
			{
				current = (*current).next_;
			}
			// Attribute next of the last Node (current) takes the value of n.
			(*current).next_ = n; 
			/* n is now the last node, so its attribute next is equal to nullptr, and its attribute prev is equal to the second last
			 Node either current. */
			(*n).next_ = nullptr;
			(*n).prev_ = current;
			nb_elts_ ++;
		}
		// The insertion is realised in the middle.
		else
		{	
			// initialization of a pointer (current) wich points to the head
			Node *current = head_;
			int i=0;
			// We cross the list until the node before the insertion. Like this Current points on the last node before the insertion.
			while (i <pos)
			{
			 	current = (*current).next_;
			 	i++; 
			}
			// n is placed after pos, so the attribute prev of n is setted to current.
			(*n).prev_ = current;
			//The attribute next of the node n is is setted to attribute next of the current node. 
			(*n).next_ = (*current).next_;
			// Finally, the attribute next of the current is setted to n.
			(*current).next_ = n;
			nb_elts_ ++;
		}
	}
}

/*The method Display allows to users to print the value of elements contained in the list crossing this one from the beginning.*/
void List::Display()
{
	// initialization of a pointer (current) wich points to the head
	Node *current = head_;
	// If the list contains only one element we print the attribute obj_ of the first element.
	if ((*current).next_ == nullptr)
	{
		cout << (*current).obj_ << endl;
	}
	// Otherwise we cross the list until the last element.
	else
	{
		while ((*current).next_ != nullptr )
		{
			// For ecah Node we print its attrribute obj wich contains the address of a complex number. 
			std::cout<<(*current).obj_<<std::endl;
			current=(*current).next_;
    }
    // We print the last element.
    std::cout<<(*current).obj_<<std::endl;
  }
}	

