#include<iostream>
using namespace std;
class bank
{
      private:
      float balance=0,deposit,withdraw;
      public:
      
      void c_diposit()
      {
        cout<<"enter amount deposit :";
        cin>>deposit;
        balance=balance+deposit;
      }
        void c_withdraw()
      {
        cout<<"enter your withdraw amount :";
        
        cin>>withdraw;
        balance=balance-withdraw;
      }  
       void c_showdata()
      {
        cout<<" your balance :"<<endl<<"\t"<<balance<<endl;
      }
};
      int main(){
      bank a;
      int ch;

      cout<<" press[1] to chek account balance"<<endl;
      cout<<" press[2] to withdrawal money :"<<endl;
      cout<<" press[3] to deposit money"<<endl;
      cout<<" press[0] to exit :"<<endl;
     
      do{
        cout<<"choice your transaction :"<<endl;
        cin>>ch;
        switch (ch) {
       case 1 :
         a.c_diposit();
       break;

       case 2 :
         a.c_withdraw();
         break;

       case 3 :
         a.c_showdata();
         break;

       case 0 :
         break;
       default:
        cout<<" wrong choice......";
        break;  
        }
     }while (ch!=0);
     
     
 }
 

    