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
		
	
};
