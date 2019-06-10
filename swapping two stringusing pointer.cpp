#include <iostream>
using namespace std;


void swap(char **str1,char **str2)
{
    char *temp =*str1;
    *str1=*str2;
    *str2=temp;
}
int main() {
	// your code goes here
	char*str1="Ankit is a good boy";
	char*str2="Gupta is a title";
	cout<<"Before Swapping\n";
	cout<<"str1 "<<str1<<" "<<&str1<<"\n";
	cout<<"str2 "<<str2<<" "<<&str2<<"\n";
	
	swap(&str1,&str2);
	cout<<"After Swapping\n";
	cout<<"str1 "<<str1<<" "<<&str1<<"\n";
	cout<<"str2 "<<str2<<" "<<&str2<<"\n";
	cout<<&str1;
	return 0;
}


//output:
/*Before Swapping
str1 Ankit is a good boy 0x7fffe49cda00
str2 Gupta is a title 0x7fffe49cda08
After Swapping
str1 Gupta is a title 0x7fffe49cda00
str2 Ankit is a good boy 0x7fffe49cda08
0x7fffe49cda00*/