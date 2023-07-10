#include<iostream>
using namespace std;
class base{
      protected :
      int n,i;
};     
class derived : public base
{
     public :
     void getn()
     {
        cout<<"enter the number :";
        cin>>n;
        for(i=0;i<=n;i++){
         cout<<"sqare of is : "<<(i*i)<<endl;
    }
     }

};
int main()
{
    derived d;
    d.getn();
   
}
  

                                                                   