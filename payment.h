#pragma once
//it21315114 
class payment{
  protected:
    char pay_id[20];
    char card_name[50];
    char card_type[20];
    int m_id;
  public:
    payment();
    payment( char payid[], char cardname[], char cardtype[],int mid);
    void inputdetails();
    void displaydetails();
    ~payment();


  
};