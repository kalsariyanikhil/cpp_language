// square and cube hierarchical inheritance
#include<iostream>
using namespace std;
class number{
      private : 
      int num;
      public :
      void getn()
    
      {
        cout<<" enter  num :";
        cin>>num;
      }
      int retn()
      {
        return num;
      }
};
class square : public number{
      public :
      int gets()
      {  
        int num,sqr;
        num = retn();
        sqr = num * num;
        return sqr;
      }
    
};
class cube : public number{
      private :
      public :
      int getc()
      {  
        int num,cube;
        num = retn();
        cube = num * num;
        return cube;
      }
    
};

int main()
{ 
     square s;
     cube c;
     int sqr, cube;

     s.getn();
     sqr = s.gets();
     cout<<" sqare of is :"<<sqr<<endl;

     c.getn();
     cube = c.getc();
     cout<<" cube of is :"<<sqr<<endl;

}
  

                                                                   