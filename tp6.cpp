#include <stdio.h>
#include <iostream>
#include "Node.h"
#include "MesComplexes.h"
#include "List.h"

int main(){
  MesComplexes C1(0 , -2);
  MesComplexes C2(0 , 0);
  MesComplexes C3(1 , 0);
  MesComplexes C4(2 , 0);
  
  // Test default constructor of list
  List l1;
  std::cout <<"Address stored in a list's head created by the default constructor : " <<l1.head_ << std::endl ; 
  std::cout <<"Number of elements in a list created by the default constructor : " <<l1.nb_elts_ << std::endl ; 

  //Test of parameterized constructor
  List l2(&C1);
  std::cout <<"Creation of a list named l2 using parameterized constructor. l2 contains the address of C1."<< std::endl ; 
  std::cout <<"Number of elements in  l2  : " <<l2.nb_elts_ << std::endl ; 
  std::cout << "Address stored in l2 head_ attribute  : " << std::endl ;
  l2.Display() ;
  std::cout <<"Address of complex number named C1  : " <<&C1 << std::endl ;

  // Test of method Pushback
  l2.Pushback(&C2);
  std::cout << "We add at the end of l2 the address of a complex number named C2 using Pushback method "<< std::endl ;
  std::cout << "Number of elements in  l2  : " << l2.nb_elts_ << std::endl ; 
  std::cout << "Addresses stored in l2 after the addition of C2   : " << std::endl ;
  l2.Display();
  std::cout << "Address of C1  : " << &C1 <<"Address of C2  : " << &C2<< std::endl ;

  // Test of method Popback
  l2.Pushback(&C3);
  std::cout <<"We add to l2 a complex number named C3  ( l2.Pushback(&C3) ) "<< std::endl ;
  l2.Popback();
  std::cout <<"We remove the last element (C3) of l2 using Popback method "<< std::endl ;
  std::cout <<"Number of elements in  l2  after deletion of C3 : " << l2.nb_elts_ << std::endl ;
  std::cout <<"Addresses stored in l2 after the deletion of C3   : " << std::endl ;
  l2.Display();
  std::cout <<"Address of C1  : " <<&C1<< "  Address of C2  : " << &C2 << std::endl ;

  l2.Popback();
  std::cout <<"We remove the last element (C2) of l2 using Popback method "<< std::endl ;
  std::cout <<"Number of elements in  l2  after deletion of C2 : " << l2.nb_elts_ << std::endl ;
  std::cout <<"Addresses stored in l2 after the deletion of C2   : " << std::endl ;
  l2.Display();
  std::cout <<"Address of C1  : " <<&C1<< std::endl ;



  // Test of method insert 
  // If a list doesn't contain element
  List l3; 
  int first_pos = 0 ; 
  l3.Insert(first_pos , &C1);
  std::cout <<"We create a list named l3, in wich we insert the complex number C1 using insert method"<< std::endl ;
  std::cout <<"Number of elements in  l3  after insertion of C1 : " << l3.nb_elts_ << std::endl ;
  std::cout <<"Addresses stored in l3 after the insertion of C1   : "<<std::endl; 
  l3.Display();
  std::cout <<"Address of C1  : " <<&C1<< std::endl ;

  // Insertion to the head
  l3.Insert(first_pos, &C2);
  std::cout <<"We insert at the begining of l3 a complex number named C2 "<< std::endl ; 
  std::cout <<"Number of elements in  l3  after insertion of C2 : " << l3.nb_elts_ << std::endl ; 
  std::cout <<"Address stored in l3 after this insertion  : "<< std::endl ;
  l3.Display();
  std::cout <<"Address of C2  : " <<&C2 <<" Address of C1  : " <<&C1<< std::endl ;

  // Insertion to the tail
  int last_pos = 5 ; 
  l3.Insert(last_pos, &C3);
  std::cout <<"We would like to insert at position 5th of l3 a complex number named C3. "<< std::endl ; 
  std::cout<< "However l3 contains only 2 elements, according our programm this action isn't possible. That's why we check if C3 is included to the tail as expected.  " << std::endl ; 
  std::cout <<"Number of elements in  l3  after insertion of C3 : " << l3.nb_elts_ << std::endl ; 
  std::cout <<"Address stored in l3 : "<< std::endl ;
  l3.Display();
  std::cout <<"Address of C2  : " <<&C2 <<" Address of C1  : " <<&C1<<" Address of C3  : " <<&C3<< std::endl ;


  //Insertion to the middle
  int middle_pos = 1; 
  l3.Insert(middle_pos, &C4);
  std::cout <<"We insert after l3 second element (C1) a complex number named C4 "<< std::endl ; 
  std::cout <<"Number of elements in l3 after insertion of C4 : " << l3.nb_elts_ << std::endl ;
  std::cout <<"Address stored in l3 : "<< std::endl ; 
  l3.Display();
  std::cout <<"Address of C2  : " <<&C2 <<" Address of C1  : " <<&C1<<" Address of C4  : " <<&C4<<" Address of C3  : " <<&C3<< std::endl ;
  

  List l4;
  l4.Pushback(&C1);
  printf("HEY  HEY" );
	return 0;
}
