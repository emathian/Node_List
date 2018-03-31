#include <stdio.h>
#include <iostream>
#include "Node.h"
#include "MesComplexes.h"
#include "List.h"

int main(){
	
    MesComplexes C1(0 , -2);
    MesComplexes C2;
 
    // List
    List L1;
    std::cout << L1.head()<< std::endl;
    std::cout << L1.nb_elts()<< std::endl;
    int n = 3;
    List L2(3);
    List L3;
    std::cout <<"Test Pushback"<< std::endl;
    L3.Pushback(&C1);
    std::cout << L3.nb_elts()<< std::endl;
    L3.Pushback(&C2);
 
    L3.Display();
    std::cout << &C1 <<"            "<< &C2 << std::endl;
    std::cout << L3.nb_elts()<< std::endl;


    std::cout <<"Test Popback"<< std::endl;
    L3.Popback();
    std::cout << L3.nb_elts()<< std::endl;
    std::cout <<"Display"<< std::endl;
    L3.Display();
    std::cout << &C1 <<"       "<< &C2 << std::endl;
    
    int ppos= 0 ; 
    L3.Insert(ppos , &C1);
    std::cout << L3.nb_elts()<< std::endl;
    // Test Insert on a empty class
    List L4;
    L4.Insert(ppos , &C1);
    std::cout << L4.nb_elts()<< std::endl;
    

    
	return 0;
}
