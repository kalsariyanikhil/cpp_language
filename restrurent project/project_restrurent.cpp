#include<iostream>
#include<string.h>
using namespace std;
class Restaurant
{
   protected:
   string name, contact;
   public:
   void get_info()
     {
          cout<<"\n\t\t **********___AXAR RESTRURENT___**********\n";
          cout<<"Enter your Name : ";
          cin>>name;
          cout<<"Enter your Contact Number : ";
          cin>>contact;
     }
   void show_info()
     {
          cout<<"\n\t Name : "<<name<<endl;
          cout<<"\n\t Contact Number : "<<contact<<endl;
     }

};
class Show_bill : public Restaurant
{
      protected :   
      double  GST  ,  disc , Net_bill,bill_amt =0 ;
      int   Bill =0 , quty;
      string items[5];
      public :
      int item1()
      {
         cout<<"\n \tEnter  : ";cin>>quty;
         items[0] = "GRREN BHAJI";
         return Bill = Bill + quty*450;
      }
      int item2()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
         items[1] = "GRREN GOTALO";
         return Bill = Bill + quty*550;
      }
      int item3()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
          items[2] = "MASALA DHOSA";
         return Bill = Bill + quty*400;
      }
      int item4()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
          items[3] = "BOMBAY BHEL";
         return Bill = Bill + quty*500;
      }
      int item5()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
          items[4] = "AXAR SPECIAL";
         return Bill = Bill + quty*800;
      }
      double Show_Bill_Amt()
      { 
         
         return bill_amt = bill_amt + Bill;
      }
      double Show_disc()
      {
         if (bill_amt >  5000 )
        {
            return disc = ( bill_amt * 10 ) / 100; 
        }
        else 
        {
            return disc = 0;
        }
      }
      double Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
      }

      double Show_Net_bill()
      {
        return Net_bill =   bill_amt +  GST - disc ;
      }
      void Show_Net_Bill()
      {
            cout<<"\n\t Total Order price  : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t GST                : "<<Show_GST()<<endl;
            cout<<"\n\t Discount           : "<<Show_disc() <<endl;
            cout<<"\n\t Net Bill iS        : "<<Show_Net_bill()<<endl; 
              cout<<"\n\t Items Bought     : "<<endl;
        for (int i = 0; i < 5; i++)
        {
            if (!items[i].empty())
                cout<<"\n\t\t "<<i + 1<<". "<<items[i]<<endl;
        }
      }

};
int main ()
{
        Show_bill J ;
        J.get_info();

        cout<<"\n\t\t\t ::::::::::__Menu__:::::::::: \n";
        cout<<" \n \t\t\t [1] GRREN BHAJI  : RS. 450 /- "; 
        cout<<" \n \t\t\t [2] GRREN GOTALO : RS. 550 /- "; 
        cout<<" \n \t\t\t [3] MALASA DHOSA : RS. 400 /- "; 
        cout<<" \n \t\t\t [4] BOMBAY BHEL  : RS. 500 /- "; 
        cout<<" \n \t\t\t [5] AXAR SPECIAL : RS. 800 /- \n";
        cout<<" \n \t\t\t [6] CANCEL ORDER  ";
        cout<<" \n \t\t\t  Confirm Your Order    [0]  \n";
        cout<<" \n \t\t\t -> NOTIS<- _____ don't be shy ask forgiveness _____";

        int i;
        do
        {
         cout<<"\n Enter your choice : ";
         cin>>i;
        switch (i)
        {
        case 1: 
             J.item1();
                  cout<<"\n \t\t\t [1] GRRN BHAJI  : RS.450 \n";
            break;
        case 2: 
             J.item2();
                  cout<<"\n \t\t\t [2]GRREN GOTALO : RS.550 \n";
            break;
        case 3: 
             J.item3();
                  cout<<"\n \t\t\t [3]MASALA DHOSA  : RS.400 \n";
            break;
        case 4: 
             J.item4();
                  cout<<"\n \t\t\t [4]BOMBAY BHEL  : RS.500\n";
            break;
        case 5: 
            J.item5();
                 cout<<"\n \t\t\t [5]AXAR SPECIAL  : RS.800 \n";
            break;
            case 0: 
            break;
        case 6:
        cout<<"\n \t\t\t [6] CANCEL ORDER \n";
            return 0;
            default :
           cout<<"\n \t\t\t [6] CANCEL ORDER \n";
            break;

        }

} while (i!=0);
            J.show_info();
            J.Show_Net_Bill();
}