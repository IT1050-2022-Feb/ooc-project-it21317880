//IT21318870
#include<iostream>
#include<cstring>
using namespace std;

class voting{
	
	private:
	char vote_id[30];
	char Elec_id[30];
	int	Candidate_No;
	char Date[30];
	float Time;
	
	
	public:
		voting();
		voting(const char vote_id[],const char Elec_id[],int Candidate_No,const char Date[],int Time);
		void setvotingDetails();
		void displayvotingDetails();
		~voting();
	
};