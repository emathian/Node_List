#include <stdio.h>
#include <iostream>
#include "Node.h"
#include "MesComplexes.h"

int main(){
	
    MesComplexes C1(0 , -2);
    Node node1;
    std::cout << node1.next()<< std::endl;
    std::cout << node1.obj()<< std::endl;
    Node node2(&C1);
    std::cout << node2.next()<< std::endl;
    std::cout << node2.obj()<< std::endl;
	return 0;
}
