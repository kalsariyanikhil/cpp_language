#include<iostream>
using namespace std;
class result
{
int s,m,e,total;
char name[20];
float per;

public:

result()
{
     cout<<"enter a student name  :";
     cin>>name;
     cout<<"enter a scince marks:";
     cin>>s;
     cout<<"enter a maths marks:";
     cin>>m;
     cout<<"enter a english marks:";
     cin>>e;
}
void re_out()
{
    total=s+m+e;
    per=float(total)/3;
    cout<<"student name :"<<name<<endl;  
    cout<<"scince marks:"<<s<<endl;
    cout<<"maths marks:"<<m<<endl;
    cout<<"english marks:"<<e<<endl;
    cout<<"total:"<<total<<endl;
    cout<<"per is :"<<per<<" % ";
}
};
int main()
{
    result sub;

    sub.re_out();
}