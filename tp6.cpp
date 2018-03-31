#include <stdio.h>
#include <iostream>
#include "Node.h"
#include "MesComplexes.h"
#include "List.h"

int main(){
	
    MesComplexes C1(0 , -2);
    MesComplexes C2;
    MesComplexes C3 (0,1);
    MesComplexes C4 (-1,1);
 
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
    
    // Test Insert on a empty class
    std::cout <<"INSERT AT THE BEGINNING of an empty List "<< std::endl;
    int ppos= 0 ; 
    List L4;
    L4.Insert(ppos , &C1);
    std::cout << L4.nb_elts()<< std::endl;
    L4.Display() ;

     std::cout <<"INSERT AT THE BEGINNING "<< std::endl;
     List L5;
     L5.Pushback(&C1);
     L5.Pushback(&C2);
     L5.Pushback(&C3);
    std::cout << L5.nb_elts()<< std::endl;
    L5.Insert(ppos , &C4);
    std::cout << L5.nb_elts()<< std::endl;
    L5.Display() ;
    std::cout <<" C4  "<< &C4<<   "     C1      "<<&C1 <<" C2  "<< &C2 << "  C3   "<< &C3  <<std::endl;


    std::cout <<"INSERT AT (After) THE  END "<< std::endl;
    int p2  = 7;
    L5.Insert(p2 , &C1);
    std::cout << L5.nb_elts()<< std::endl;
    L5.Display() ;
    std::cout <<" C4  "<< &C4<<   "     C1      "<<&C1 <<" C2  "<< &C2 << "  C3   "<< &C3  <<std::endl;


     std::cout <<"INSERT AT  THE  END "<< std::endl;
    int p3  = 2;
    L5.Insert(p3 , &C1);
    std::cout << L5.nb_elts()<< std::endl;
    L5.Display() ;
    std::cout <<" C4  "<< &C4<<   "     C1      "<<&C1 <<" C2  "<< &C2 << "  C3   "<< &C3 << " C4  "<< &C4 <<std::endl;


    
	return 0;
}
