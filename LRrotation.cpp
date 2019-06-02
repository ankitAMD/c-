#include <iostream>
using namespace std;

void reverse(int arr[], int start ,int end)
{
    while(start<end)
    {
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void leftrotate(int arr[], int d, int n)
{
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

void rightrotate(int arr[], int d, int n)
{
    reverse(arr, d, n-1); 
    reverse(arr, 0, d-1);
    reverse(arr, 0, n-1);
}
int main() {
	// your code goes 
	int n,d,arr[10];
	cout<<"enter the no of number you want to enter and n="<<endl;
	cin>>n;
	cout<<"enter the position you want to rotate and d="<<endl;
	cin>>d;
	cout<<"enter the array of number\n";
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	
	leftrotate(arr, d, n);
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    cout<<arr[i]<<" ";
	}
	cout<<"\n";
	rightrotate(arr, d, n);
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    cout<<arr[i]<<" ";
	}
	return 0;
}

