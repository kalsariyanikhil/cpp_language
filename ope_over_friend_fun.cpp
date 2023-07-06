#include<iostream>
using namespace std;
class box{
    int l,w,h;
      public:
      void setdata(int a,int b, int c){
        l=a;
        w=b;
        h=c;
      }
      int getdata(){
        return l*w*h;
      }
      friend box operator+(box m,box n){
        box t;
        t.l = m.l + n.l;
        t.w = m.w + n.l;
        t.h = m.h + n.l;
        return t;
      }
      
};

      int main()
      {
        box b,a,c;
        b.setdata(2,2,2);
        cout<<"box b volume is :"<<b.getdata()<<endl;
        a.setdata(3,3,3);
        cout<<"box a volume is :"<<a.getdata()<<endl;
        c= a+b;
        cout<<"box b volume is :"<<c.getdata()<<endl;
     
      }
                                                                   