//it21317880

#include<iostream>
#include<cstring>
#include"UnRegistereduser.h"
using namespace std;


UnRegisteredUser::UnRegisteredUser(){
		
  strcpy(Name,"");
	strcpy(Email,"");
	strcpy(Gender,"");
	contactNo=0;
	
}

UnRegisteredUser::UnRegisteredUser (char pName[], char pEmail[], char pGender[],int pcontactNo)
{
	strcpy(Name,pName);
	strcpy(Email,pEmail);
	strcpy(Gender,pGender);
	contactNo=pcontactNo;
	
	}	

void UnRegisteredUser::inputuserDetails()
  {
    	
cin>>Name;
cin>>Email;
cin>>Gender;
cin>>contactNo;
  }
  
void UnRegisteredUser:: DisplayuserDetails()
	{
	
cout<<"Display User Name :"<<Name<<endl;
cout<<"display User Email :"<<Email<<endl;
cout<<"Display User Gender :"<<Gender<<endl;
cout<<"display User contact Number :"<<contactNo<<endl;
		
	}

UnRegisteredUser::~UnRegisteredUser()
{
  cout<<" user Details deleted"<<endl;
	//destructor
}