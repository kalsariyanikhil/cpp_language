//    a
//    b C
//    d E f
//    g H i J
//    k L m N o 

#include<iostream>
using namespace std;
int main()
{
   char i,j,k=1;

   for(i=1;i<=5;i++){
   for(j=1;j<=i;j++){
    k++;
    if(j%2==1){
        cout<<" "<<char(k+95);
    }
    else{
        cout<<" "<<char(k+63);
    }
   }
   
    { 
    cout<<"\n";
    }
   }

}
   

   



