#include<iostream>
using namespace std;
class test{
      int m;
      public:

      test()
      {
        cout<<"default construtor is called..."<<endl;
        cout<<"enter m :";
        cin>>m;
      }
      ~test()
      {
        cout<<"destructor is called :"<<endl;
      }
       test(int a)
      {
        cout<<"parameterized construtor is called...a:"<<a<<endl;
      }
      
     test(char a)
      {
        cout<<"parameterized construtor is called...char a is"<<a<<endl;
      }
      void getdata()
      {
        cout<<"value of m::"<<m<<endl;
      }
};

      int main()
      {
        test t, a(10);
        t.getdata();
      }
                                                                   