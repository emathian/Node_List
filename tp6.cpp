#include <stdio.h>
#include <iostream>
#include "Node.h"
#include "MesComplexes.h"
#include "List.h"

int main(){
	
    MesComplexes C1(0 , -2);
    MesComplexes C2;
 
    Node node2(&C1);
    std::cout << node2.next()<< std::endl;
    std::cout << node2.obj()<< std::endl;
    node2.set_obj(&C2);
    std::cout << node2.next()<< std::endl;
    std::cout << node2.obj()<<"	C2 Address	"<< &C2 <<std::endl;

    // List
    List L1;
    std::cout << L1.head()<< std::endl;
    std::cout << L1.nb_elts()<< std::endl;


	return 0;
}
