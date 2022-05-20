//it21317880
#include"UnRegistereduser.h"
#include"Registereduser.h"
#include"voting.h"
#define SIZE1 2

        Registereduser::Registereduser(){
        	
		}
    	Registereduser::Registereduser(int vote1,int vote2,const char Name[],const char Email[],const char Gender[],int contactNo){
    		vote[0]=new voting(vote 1);
    		vote[1]=new voting(vote2);
		}
        void Registereduser:: ReguserDetails(int NIC){
        	
		}
        void Registereduser::displayReguserDetails(){
        	
		}
        void Registereduser::updateReguserDetails(){
        
		}
       Registereduser:: ~Registereduser(){
       	
       	//destrutor
       	
       	for(int i=0;i<SIZE;i++)
       	{
       		delete vote[i];
		   }
       	
	   }
        
        