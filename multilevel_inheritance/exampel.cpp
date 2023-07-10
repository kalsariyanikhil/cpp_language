// exampel multiple inheritance
#include<iostream>
using namespace std;
class ABC{
      protected :
      int a;
      public :
      void seta()
      {
        cout<<" enter  a :";
        cin>>a;
      }
};
class PQR : public ABC{
      protected :
      int b;
      public :
      void setb()
      {
        cout<<" enter  b :";
        cin>>b;
      }
};
class XYZ : public PQR{
      protected :
      int c;
      public :
      void setc()
      {
        cout<<" enter  c :";
        cin>>c;
      }
      void get(){
        cout<<"addition of a+b+c ="<<a+b+c<<endl;
      }
};

int main()
{
    XYZ x;
    x.seta();
    x.setb();
    x.setc();
    x.get();

}
  

                                                                   