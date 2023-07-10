// using multilevel squre
#include<iostream>
using namespace std;
class a{
      protected :
      int n;
      public :
      void set(){
        cout<<" enter value of :";
        cin>>n;
      }
};     
class b : public a
{
     protected :
     int i;
};
class derived : public b 
     {
        public :
        void serice()
    {
        for(i=1;i<=n;i++){
         cout<<""<<i*i<<endl;
    }
  }
};


int main()
{
    derived d;
    d.set();
    d.serice();
   
}
  

                                                                   