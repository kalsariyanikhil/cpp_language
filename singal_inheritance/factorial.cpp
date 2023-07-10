#include<iostream>
using namespace std;
class base{
      protected :
      int n,i,fact=1;
      public :
      void setn()
      {
        cout<<"enter n :";
        cin>>n;
      }

};     
class derived : public base
{
     public :
     void getn()
     {
        
        for(i=1;i<=n;++i)
        {
            fact*=i;
            cout<<"factorial  of number ["<<i<<"]:"<<fact<<endl;
    }
     }

};
int main()
{
    derived d;
    d.setn();
    d.getn();
   
}
  

                                                                   