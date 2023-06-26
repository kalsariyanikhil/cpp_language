//                *
//               * *        
//              *   *       
//             *     *      
//            *       *     
//           *         *    
//          *           *   
//         *             *  
//        *               * 
//       * * * * * * * * * *   
 
#include<iostream>
using namespace std;
int main()
{

 int i,j,sp=15;

 for(i=1;i<=10;i++)
 {
     for(j=1;j<=sp;j++){
       cout<<" ";
     }
   for(j=1;j<=i;j++){
    if( j==1 || j==i || i==10)
    {
       cout<<" *";
    }
    else{
       cout<<"  ";
    }
   }
   sp--;
  cout<<"\n";
 }

 

}