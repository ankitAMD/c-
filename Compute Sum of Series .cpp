// C++ recursive function to  
// solve tower of hanoi puzzle  
#include <bits/stdc++.h> 
using namespace std; 
  
int fact(int a)
{
    if(a==0)
      {
          return 1;
      }
    else
    {
        return (a*fact(a-1));
    }
       
}
  
// Driver code 
int main()  
{  
    int n;double m=0.0;
    cout<<"print a number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        m=m+(1.0/fact(i));
    }
    cout<<m;
    return 0;
}  

