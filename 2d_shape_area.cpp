#include<iostream>
using namespace std;
class Volume
{
    public:
      Volume()
   {
      cout<<" Volume of Shape Formula's "<<endl;
   }

    Volume(int l)
   {
     cout<<" Volume of Cube : "<<l*l*l<<endl;
   }
    
    
    Volume (int l,int w,int h)
   {
      cout<<" Volume of Rectangular Solid or Cuboid : "<<l*w*h<<endl;
   }

    Volume(double r)
   {
      cout<<" Volume of Sphere : "<<((4/3)*3.14*r*r*r)<<endl;
   }

   Volume(double r,int h)
   {
     cout<<" Volume of Cylinder : "<<3.14*r*r*h<<endl;
   }

   Volume(int b,double h)
   {
     cout<<" Volume Prism : "<<(b*b)*h<<endl;
   }

   Volume(double b, double h)
   {
     cout<<" Volume of Pyramid :  "<<0.33*b*h<<endl;
   }


 
};


int main()
{
    Volume shapes,shape(12),shape1(2,4,3),shape2(3.4),shape3(3.2,4),shape4(3,5.4),shape5(2.1,0.4);
}




