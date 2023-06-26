#include<iostream>
using namespace std;
class result{
    private:
    int maths,english,gujrati,total;
    float pr;
    public:
    void setter(){
     cout<<"enter a maths marks:";
     cin>>maths;
     cout<<"enter a english marks:";
     cin>>english;
     cout<<"enter a gujrati marks:";
     cin>>gujrati;
    }
    void cal(){
        total=maths+english+gujrati;
        pr=float(total)/300*100;
     }
     void print(){
     cout<<"total is :"<<total<<endl;
     cout<<"pr is :"<<pr;

     }
};    

     int main(){
      result x;
      x.setter();
      x.cal();
      x.print();

     }
     
 

     
   


   

   



