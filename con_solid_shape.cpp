// constructor solid shape 
#include<iostream>
using namespace std;
class test{
      public:
      void area (){
        cout<<"\t area of shape is "<<endl;
      }

      int area(int side)
      {
        cout<<"calculate are of square :"<<side*side<<endl;
      }
      double area(double red)
      {
        cout<<"calculate are of circle :"<<3.14*(red*red)<<endl;
      }
       int area(int width,int height)
      {
        cout<<"calculate are of rectangle :"<<width*height<<endl;
      }
      
     double area(double b,double h)
      {
        cout<<"calculate are of triengle :"<<0.5*6*h<<endl;
      }
      
     
};

      int main()
      {
        test t;
        t.area(15);        //squre
        t.area(3.12);      //circle
        t.area(20,50);     //rectangle
        t.area(4.12,9.1);  //triengle
        
      }
                                                                   