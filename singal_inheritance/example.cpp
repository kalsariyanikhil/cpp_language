#include<iostream>
using namespace std;
class base{
      protected :
      int n;
      public :
      void setn()
      {
        cout<<" enter  n :";
        cin>>n;
      }
};
class derived : public base
{
     public :
     void getn()
    {
     cout<<" value of n is "<<n<<endl;
    }

};
int main()
{
    derived d;
    d.setn();
    d.getn();
}
  

                                                                   