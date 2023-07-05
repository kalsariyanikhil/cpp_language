#include<iostream>
using namespace std;
class result{
    int maths,english,gujrati,total;
    float pr;
    public:
    void setdata(){
     cout<<"enter a maths marks:";
     cin>>maths;
     cout<<"enter a english marks:";
     cin>>english;
     cout<<"enter a gujrati marks:";
     cin>>gujrati;

     cal();
     cout<<""<<endl;

    }
    void cal(){
        total=maths+english+gujrati;
        pr=total/3;
     }
     void getdata(){
        cout<<maths<<"\t"<<english<<"\t"<<gujrati<<"\t"<<total<<"\t"<<pr<<"\t\n";
     }
};    

     int main(){
        result x[5];
        int i;
        for(i=0;i<3;i++){
        x[i].setdata();
      }
        for(i=0;i<3;i++){
        x[i].getdata();
      }
      

 }
      
 

     
   


   

   



