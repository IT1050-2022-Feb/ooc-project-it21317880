//created by it21314988
class instrumentseller
{
protected:
	char instrumentsellerID[5];
	char instrumentName[20];

          

public:
	instrumentseller();
	instrumentseller(char ID[], const char name[]);

	void Display();
	~instrumentseller();
};