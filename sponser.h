//it21315114
#include"Registereduser.h"
#include"payment.h"
#pragma once
#define SIZE1 2

//composition implimentation
class sponser:public Registereduser{
 private:
    char S_id[10];
    char S_name[20];
    char S_mail[50];

    payment *pay[SIZE1];  //define part object

public:
    sponser();
    sponser(char sid[],char sname[],char smail[]);
    void displaydetailspaym();
    ~sponser();
};