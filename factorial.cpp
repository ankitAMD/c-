#include <iostream>
using namespace std;



int fact(long a)
{
    if (a>0)
    {
    return (a*fact(a-1));
    }
    else
    {
        return(1);
    }
}

int main() 
{
    
	cout<<fact(5);
	return 0;
}