//it21315114
#include<iostream>
#include<cstring>
#include"sponser.h"
using namespace std;

sponser::sponser(){
  pay[0] = new payment();
  pay[1] = new payment();
}
sponser::sponser(char sid[],char sname[],char smail[]){
  pay[0] = new payment();
  pay[1] = new payment();
  
}
void sponser::displaydetailspaym(){
    pay[0]->displaydetails();
    pay[1]->displaydetails();
}
sponser::~sponser(){
  cout<<"sponser payment removed"<<endl; 
  delete pay[1];
  delete pay[0];
}