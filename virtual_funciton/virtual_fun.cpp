// virtual function
#include<iostream>
using namespace std;
class base{
    public :
    virtual void dis(){
      cout<<"base class called...."<<endl; 
    }      
};   
class derived : public base
{
    public:
    void dis(){
        cout<<" derived class called...."<<endl;
    }
};
int main ()
{
     base*p,b;
     derived d;

     p=&b;          //base
     p->dis();

     p=&d;         //derived
     p->dis();


}


                                                                   