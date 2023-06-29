//define a class batsman with the folloeing specification
#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode;
    int batavg;
    int innings,notout,runs;
    char name[20];
    float calcavg(){
        return runs/(innings-notout);
    }
    public:
    void readdata(){
     cout<<"enter a bcode :";
     cin>>bcode;
     cout<<"enter a name  :";
     cin>>name;
     cout<<"enter a innings:";
     cin>>innings;
     cout<<"enter a notout:";
     cin>>notout;
     cout<<"enter a runs:"; 
     cin>>runs;  
     batavg = calcavg();
    }
    void displaydata(){
    cout<<"bcode:"<<bcode<<endl;  
    cout<<"name:"<<name<<endl;  
    cout<<"innings:"<<innings<<endl;
    cout<<"notout :"<<notout<<endl;
    cout<<"batavg:"<<batavg<<endl;
    }
};    
    int main(){
     batsman b;
     b.readdata();
     b.displaydata();
    }