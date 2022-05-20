#include<iostream>
#include"UnRegistereduser.h"  //Nethmimi
#include "RegisteredUser.h"   //Nethmini
#include "voting.h"           //Januk
#include "MusicProducer.h"    //Ahinsa
#include "Payment.h"          //Sadeepa
#include "Technician.h"       // Krishan
#include "sponsor.h"          //Sadeepa

using namespace std;

int main void()
{
	//RegisteredUser class
  
    RegisteredUser r1;
    r1.DisplayRegisterDetails ();
    RegisteredUser r2("sanduni","Sanduni123@gmail.com","Female",83456783);
    r2.DisplayRegisterDetails ();
  
//..............................................
// UnRegistereduser class
  
UnRegisteredUser r1;
  	Registereduser* reg1=new Registereduser();
        	
        	reg1->updateReguserDetails();
        	reg1->displayReguserDetails();
        	
        	delete reg1;


//............................................. //voting class
  
	voting*vote1;
	
	vote=new voting();
	 vote1-> displayvotingDetails();
//..............................................
//Payment class
  
	payment * payment1=new payment();
        payment1->inputdetails();
  			payment1->displaydetails();
              
			delete  payment1;
//..............................................
//instrumentseller class
	instrumentseller*e1;
   e1->display(); 
	
//..............................................
//MusicProducer class
  
	MusicPraducer m1;
  m1.DisplayinputDetails();
  MusicProducer

    m2("vihanga",457815,200045782,
  "vihanga@gmail.com");
  m2.DisplayuserDetails ();

  //............................................
  //sponsor class
      sponser*newsponser= new sponser;
      newsponser->displaydetailspaym();
      delete newsponser; 
  
	return 0;
}
