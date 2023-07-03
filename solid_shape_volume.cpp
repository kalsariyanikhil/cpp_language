// solid shape volume find out.
#include<iostream>
using namespace std;
class test{
      int m;
      public:

      test()
      {
        cout<<"default construtor auto call..."<<endl;
      }
      ~test()
      {
        cout<<"destructor  auto whan object work end (destore to object) is call..... :"<<endl;
      }
       test(int a)
      {
        cout<<"parameterized construtor is called...a:"<<a<<endl;
      }
      
     test(char a)
      {
        cout<<"char value of a is"<<a<<endl;
      }
      
     
};

      int main()
      {
        test t, a=21,b('3');
        
      }
                                                                   