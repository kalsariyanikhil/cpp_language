//define a class book with the following description
#include<iostream>
using namespace std;
class book
{
    private:
    int   booknumber,n;
    float price;
    char  book_title[20];
    float cost,cp_number;
    float total_cost(int n)
    {
        return n*price;
    }
    public:
    void input()
    {
     cout<<"enter a book number :";
     cin>>booknumber;
     cout<<"enter a book title :";
     cin>>book_title;
     cout<<"enter a price :";
     cin>>price;
     
    }
    void purchase(){   
    cout<<"enter number of book:";
    cin>>n;  
    cout<<"enter a book number:"<<booknumber<<endl;  
    cout<<"book title:"<<book_title<<endl;
    cout<<"prize :"<<price<<endl;
    cost=total_cost(n);
    cout<<" TOTAL PRIZE IS :"<<cost<<endl;
    cout<<" * THANK TOU  *"<<endl;
    }
};    
    int main(){
     book t;
     t.input();
     t.purchase();
    }