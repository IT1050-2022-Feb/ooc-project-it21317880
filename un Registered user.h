//it21317880

#pragma once
 
class UnRegisteredUser{
	
	protected:
	char Name[20];
	char Email[20];
	char Gender [20];
	int contactNo;
	
	public:
		  UnRegisteredUser();
	    UnRegisteredUser (char Name[],char Email[], char Gender[],int contactNo);
		void inputuserDetails();
    void DisplayuserDetails();
		~UnRegisteredUser();
			
};