// static member and  function
#include<iostream>
using namespace std;
class test{
    public :
    static int a;
    test(){
        cout<<"test calling......"<<endl;
        ++a;
    }
};      
    int test::a=50;
   
int main ()
{
     cout<<"starting point :"<<test::a<<endl;
     test t1,t2;
     cout<<"ending point :"<<test::a<<endl;
}


                                                                   