#include<iostream>

using namespace std;

class Report 
{
 private: 

    int adno,i,total=0;
    char name[20];
    float marks[5],averg=0,per;

    float Get_avg()
    {
        averg=total/5;
        per=(total/500)*100;
    }  


 public :
 
 // get data 

    void READINFO()
    {
      cout<<"Enter a Admin No is :";
      cin>>adno;
      cout<<"Enter a Name :";
      cin>>name;
     
     for (i=0;i<5;i++)
     {
        switch(i)
        {
        case 0:
            cout<<"Enter English marks : ";
            break;

        case 1:
            cout<<"Enter Science marks : ";
            break;
        
        case 2:
            cout<<"Enter Maths marks  : ";
            break;
                  
        case 3:
            cout<<"Enter Hindi marks : ";
            break;
                  
        case 4:
            cout<<"Enter Statistics marks : ";
            break;
         
        default:
            cout<<"enter velid input ";
            break;
        }// end switch

        cin>>marks[i];
       
        total = total+marks[i];

       } // end loop 
       
       Get_avg();
       DISPLAYINFO();
    }

// display data 

    void DISPLAYINFO()
    {
        cout<<endl<<"Admin No :"<<adno;
        cout<<endl<<"Name :"<<name;
     
     for (i=0;i<5;i++)
     {
        switch(i)
        {
        case 0:
            cout<<endl<<"English : ";
            break;

        case 1:
            cout<<endl<<"Science : ";
            break;
        
        case 2:
            cout<<endl<<"Maths : ";
            break;
                  
        case 3:
            cout<<endl<<"Hindi : ";
            break;
                  
        case 4:
            cout<<endl<<"Statistics : ";
            break;
         
        } // end switch

        cout<<marks[i];

      } // end loop  

      cout<<endl<<"total marks is : "<<total;
      cout<<endl<<"Averg marks is : [ "<<averg<<"]";
      cout<<endl<<"Percentage    is : "<<per<<" %";

    }


};

int main()
{

  Report studnet ;

  studnet.READINFO();

       

}