//it21315114 
#include"payment.h"
#include<iostream>
#include<cstring>
using namespace std;
payment::payment(){
                strcpy(pay_id,"");
                strcpy(card_name,"");
                strcpy(card_type,"");
                m_id=0;
}
payment::payment( char payid[],char cardname[],char cardtype[],int mid){
                strcpy(pay_id,payid);
                strcpy(card_name,cardname);
                strcpy(card_type,cardtype);
                m_id=mid;
                               
}
 
void payment::inputdetails(){
  
}
 
 
void payment::displaydetails(){
        cout<<pay_id<<endl;
        cout<<card_name<<endl;
        cout<<card_type<<endl;
        cout<<m_id<<endl;
        
        
}
 
payment::~payment(){
cout<<"payment removed  "<<endl;
}