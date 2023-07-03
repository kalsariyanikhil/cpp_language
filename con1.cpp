#include<iostream>
using namespace std;
class test{
      public:
      test()
      {
        cout<<"default construtor is called..."<<endl;
      }
      test(int a)
      {
        cout<<"parameterized construtor is called..."<<a<<endl;
      }
     test(char a)
      {
        cout<<"parameterized construtor is called..."<<a<<endl;
      }
};
      int main()
      {
        test t,b(10),c('a');
      }
                                                                   