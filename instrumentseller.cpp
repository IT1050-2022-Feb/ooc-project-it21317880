//created by it21314988
#include <cstring>
#include <iostream>
#include"payment.h"
#include"RegisteredUser"
using namespace std;

class instrumentseller: public RegistereUser
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
instrumentseller::instrumentseller() {
	strcpy_s(instrumentsellerID, "");
	strcpy_s(instrumentName, "");
}
instrumentseller::instrumentseller(char ID[], const char name[]) {
	strcpy_s(instrumentsellerID, ID);
	strcpy_s(instrumentName, name);
  }
void instrumentseller::Display() {

	cout << "instrumentsellerID:" << instrumentsellerID << endl;
	cout << "instrument name:" << instrumentName << endl;
 }
instrumentseller::~instrumentseller() {
	cout << "instrumentsellerID:" << instrumentsellerID << "deleted" << endl;
   } 