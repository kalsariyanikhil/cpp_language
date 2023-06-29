//define a class student with the following specification
#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float maths,english,gujrati,total;
    float ctotal(){
        return maths+english+gujrati;
    }
    public:
    void takedata(){
     cout<<"enter a admin No :";
     cin>>admno;
     cout<<"enter a student name  :";
     cin>>sname;
     cout<<"enter a maths marks:";
     cin>>maths;
     cout<<"enter a english marks:";
     cin>>english;
     cout<<"enter a gujrati marks:"; 
     cin>>gujrati;  
     total = ctotal();
    }
    void showdata(){
    cout<<"admin No :"<<admno<<endl;  
    cout<<"student name :"<<sname<<endl;  
    cout<<"maths marks:"<<maths<<endl;
    cout<<"english marks:"<<english<<endl;
    cout<<"gujrati marks:"<<gujrati<<endl;
    }
};    
    int main()
    {
    student s;
    s.takedata();
    s.showdata();

    }
    