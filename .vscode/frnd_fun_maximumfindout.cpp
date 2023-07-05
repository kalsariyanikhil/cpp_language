#include<iostream>
using namespace std;
class test{
      int x,y;
      friend void max(test t);
      public:

    void setdata(){
        cout<<"enter a two number";
        cin>>x>>y;
      }
};
    void max(test t){
     if(t.x > t.y){
        cout<<" largest number is :"<<t.x;
     }
     else{
        cout<<" largest number is :"<<t.y;
     }
 }     
      int main(){
       test t;
       t.setdata();
       max(t);

      }         