#include "MesComplexes.h"
class Node {

	protected  :
	Node* next_ ; 
	MesComplexes* obj_ ;
	

	public:
		
		// Getters
		Node* next();
		MesComplexes* obj();

		
		// Seters
		void set_obj(MesComplexes* C);
		
		//Constructor 

		//Default constructor
		Node();	
		//Parameterized constructor	
		Node(MesComplexes* complexe);
			// Copy constructor
		Node(const Node & node_model);
	
};
