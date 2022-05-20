//it21317712

#include<iostream>
#include<string>
#include"Registereduser.h"
using namespace std;

class Musicproducer : public RegistereUser

protected:
	string Name;
	string ID;
	string NIC;
	string Email;
public:
	Musicpraducer(char name[],int id,char nic[],string email)
	char*getname();
  char*getid();  
	char*getNIC();
	string*getEmail();
	~Musicproducer();
};


