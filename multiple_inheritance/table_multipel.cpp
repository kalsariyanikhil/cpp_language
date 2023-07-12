//using multipel inheritance table...
#include<iostream>
using namespace std;
class a{
      protected :
      int n;
      public :
      void seta()
      {
        cout<<" enter  n :";
        cin>>n;
      }
};
class b : public a
{
    protected:
    int i,j;
};
class derived : public b
{
    public:
    void setb()
   {
    for(i=1;i<=10;i++)
    {
        j=n*i;
        cout<<i<<" = "<<j<<endl;
    }
   } 
};
int main()
{
    derived d;
    d.seta();
    d.setb();
   
}
  

                                                                   