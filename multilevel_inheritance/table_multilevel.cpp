//using multilevel inheritance table...
#include<iostream>
using namespace std;
class base1{
      protected :
      int num;
      public :
      void setnum()
      {
        cout<<" enter  num :";
        cin>>num;
      }
};
class base2 : public base1
{
    protected:
    int tab,i;
};
class derived : public base2
{
    public:
    void get_table()
   {
    for(i=1;i<=10;i++)
    {
        tab=i*num;
        cout<<num<<" = "<<i<<endl;
    }
   } 
};
int main()
{
    derived d;
    d.setnum();
    d.get_table();
   
}
  

                                                                   