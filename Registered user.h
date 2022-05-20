//it21317880

#include<voting.h>
#include<UnRegistereduser.h>
#pragma once
#define SIZE1 2

class Registereduser:public UnRegistereduser{

protected:
	int NIC;
	int count=0;


    voting*vote[SIZE2];
    
    public:
    	Registereduser();
    	Registereduser(int vote1,int vote2,const char Name[],const char Email[],const char Gender[],int contactNo);
        void ReguserDetails(int NIC);
        void displayReguserDetails();
        void updateReguserDetails();
        ~Registereduser();
        
};