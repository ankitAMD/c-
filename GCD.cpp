#include<iostream>
using namespace std;


int gcd(int a, int b)
{
    if(b==0)
       return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"the GCD  "<<a<<"  is  "<<b<<" "<<gcd(a,b);
}