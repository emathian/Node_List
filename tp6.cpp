#include <stdio.h>
#include <iostream>
#include "Node.h"
#include "MesComplexes.h"

int main(){
	
    MesComplexes C1(0 , -2);
    MesComplexes C2;
    Node node1;
    std::cout << node1.next()<< std::endl;
    std::cout << node1.obj()<< std::endl;
    Node node2(&C1);
    std::cout << node2.next()<< std::endl;
    std::cout << node2.obj()<< std::endl;
    node2.set_obj(&C2);
    std::cout << node2.next()<< std::endl;
    std::cout << node2.obj()<<"	C2 Address	"<< &C2 <<std::endl;
    Node n3(node2);
	return 0;
}
