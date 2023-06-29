//define a class test inc++ with following description
#include<iostream>
using namespace std;
class test
{
    
    int testcode;
    char description[20];
    int nocandidate,centerreqd;
    float calcntr(){
        return nocandidate/100+1;
    }
    public:
    void schedule(){
     cout<<"enter a testcode :";
     cin>>testcode;
     cout<<"enter a description :";
     cin>>description;
     cout<<"enter a nocandidate :";
     cin>>nocandidate;
    
     centerreqd=calcntr();
     
    }
    void disptest(){
    cout<<"\n";   
    cout<<"testcode:"<<testcode<<endl;  
    cout<<"description:"<<description<<endl;  
    cout<<"nocandidate:"<<nocandidate<<endl;
    cout<<"centereqd:"<<centerreqd<<endl;
   
    }
};    
    int main(){
     test t;
     t.schedule();
     t.disptest();
    }