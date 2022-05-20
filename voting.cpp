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


voting::voting()
{
	strcpy(vote_id,"");
	strcpy(Elec_id,"");
	strcpy(date,"");
	int Time=0;
	int Candidate_No=0;
}

voting::voting(const char pvote_id[],const char pElec_id[],int pCandidate_No,const char pDate[],int pTime)
{
	vote_id=pvote_id;
	Elec_id=pElec_id;
	Candidate_No=pCandidate_No;
	Date=pDate;
	Time=pTime;
}

void voting::setvotingDetails()
{
	cin>>vote_id;
	cin>>Elec_id;
	cin>>Candidate_No;
	cin>>Date;
	cin>>Time;
}

void voting::displayvotingDetails(){
	cout<<"vote_id is :"<<vote_id<<endl;
	cout<<"Elec_id is :"<<Elec_id<<endl;
	cout<<"CandidTate_No is :"<<CandidTate_No<<endl;
	cout<<"Date is :"<<Date<<endl;
	cout<<"Time is :"<<Time<<endl;
	
}

voting::~voting(){
	
	cout<<"voting details deleted";
}


int main void()
{
	
	return 0;
}