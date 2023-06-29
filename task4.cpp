//define a class test inc++ with following description
#include<iostream>
using namespace std;
class fil
{
    int flightnumber;
    char destination[20];
    float distance,fule;
    float calfule(){
        if(distance<=1000)
        return fule=500;
        else if(distance>=1000&&distance<=2000)
        return fule=1100;
        else
        return fule=2200;
    }
    public:
    void feedinfo(){
     cout<<"enter a flight number :";
     cin>>flightnumber;
     cout<<"enter a destination :";
     cin>>destination;
     cout<<"enter a distance :";
     cin>>distance;
     fule=calfule(); 
    }
    void showinfo(){
    cout<<"\n";   
    cout<<"flight number:"<<flightnumber<<endl;  
    cout<<"destination:"<<destination<<endl;  
    cout<<"distance:"<<distance<<endl;
    cout<<"fule:"<<fule<<endl;
    cout<<"WEEL COME TO INDIA  "<<endl;
    }
};    
    int main(){
     fil t;
     t.feedinfo();
     t.showinfo();
    }