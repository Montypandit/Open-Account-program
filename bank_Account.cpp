#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
private:
    int total;
    string id;
    struct customer
    {

        string name,address,password;
       double phone_no,addhar,pin_no,cash;
    }person[100];
public:
    Bank()
    {
        total=0;
    }
    void choice();
     void create();
     void show();
     void update();
};
 void Bank :: choice()
{
    char ch;
    while(1)
    {
    cout<<" press any choice \n";
    cout<<"1. create a new account \n";
    cout<<"2. view customer list \n";
    cout<<"3. update information \n";
    cout<<"4. check balance \n";
    cout<<"5. withdraw the amount \n";
    cout<<"6. debit the amount \n";
    cout<<"7. Remove exiting account \n";
    cout<<"8. Exit \n";
    ch=getch();
    switch(ch)
    {
  case '1':
    {
        Bank::create();
        break;
    }
  case '2':
    {
        Bank::show();
        break;
    }
  case '3':
    {
        Bank::update();
        break;
    }
    }
    }
}
void Bank::create()
{
   cout<<"\n Enter the customer no :"<<total+1;
    cout<<"input the Customer name \n";
    cin>>person[total].name;
    cout<<"input the Customer password  \n";
    cin>>person[total].password;
    cout<<"input the Customer address  \n";
    cin>>person[total].address;
    cout<<"input the Customer phone_no \n";
    cin>>person[total].phone_no;
    cout<<"input the Customer addhar \n";
    cin>>person[total].addhar;
    cout<<"input the Customer pin_no \n";
    cin>>person[total].pin_no;
    cout<<"input the Customer cash \n";
    cin>>person[total].cash;
    total++;
}
void Bank::show()
{
    for(int i=0;i<total;i++)
    {
    cout<<"Show the customer information "<<i+1<<endl;
    cout<<"Customer name :" <<person[i].name<<endl;
    cout<<"Customer address :" <<person[i].address<<endl;
    cout<<"Customer phone_no :" <<person[i].phone_no<<endl;
    cout<<"Customer addhar :" <<person[i].addhar<<endl;
    cout<<"Customer pin_no :" <<person[i].pin_no<<endl;
    cout<<"Customer cash :" <<person[i].cash<<endl;
    }

}
void Bank::update()
{
    cout<<"input the customer password \n";
    cin>>id;
    for(int i=0;i<total;i++)
    {
    if(id==person[i].password)
    {
    cout<<"Show the previous data \n ";
    cout<<"Customer name :" <<person[i].name<<endl;
    cout<<"Customer address :" <<person[i].address<<endl;
    cout<<"Customer phone_no :" <<person[i].phone_no<<endl;
    cout<<"Customer addhar :" <<person[i].addhar<<endl;
    cout<<"Customer pin_no :" <<person[i].pin_no<<endl;
    cout<<"Customer cash :" <<person[i].cash<<endl;


    cout<<"Enter the new data \n";
    cout<<"input the Customer name \n";
    cin>>person[total].name;
    cout<<"input the Customer password  \n";
    cin>>person[total].password;
    cout<<"input the Customer address  \n";
    cin>>person[total].address;
    cout<<"input the Customer phone_no \n";
    cin>>person[total].phone_no;
    cout<<"input the Customer addhar \n";
    cin>>person[total].addhar;
    cout<<"input the Customer pin_no \n";
    cin>>person[total].pin_no;
    cout<<"input the Customer cash \n";
    cin>>person[total].cash;
    }
    }
}
int main()
{
 Bank obj;
 obj.choice();
 getch();
 return 0;
}


