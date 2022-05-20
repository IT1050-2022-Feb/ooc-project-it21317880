//it21317712
#include<iostream>
#include<string>
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
Musicproducer::Musicproducer
{
Name="";
ID="";
NIC	="";
Email="";
}
Musicproducer::Musicproducer(char name[],string id,char nic[],string email)
{
	Name=name;
    ID=id;
    NIC	=nic;
    Email=email;
}

    char* Musicproducer::getname()
	{
		return name;
    }
{
  char* Musicproducer::getid()
    return id;
  }
	}
	char*Musicproducer::getNIC();
	{
		return NIC;
	}
	string*Musicproducer::getEmail();
	{
		return Email;
	}
	
 Musicproducer::~Musicproducer()
 {
 	
 }