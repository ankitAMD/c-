#include <iostream>
using namespace std;



int fib(int a)
{
   if(a==1 || a==2)
     {
      return 1;
     } 
   else
   {
       return (fib(a-1)+fib(a-2));
   }
     
}

int main() 
{
 int n;
 cout<<"print the number required upto fibonacci series";
 cin>>n;
 for(int i=1;i<=n;i++)
 { 
     cout<<"\n"<<fib(i);
 }
}