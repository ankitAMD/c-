
#Program for array rotation

/*Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
Array

Rotation of the above array by 2 will make array

ArrayRotation1


Input arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2, n =7
1) Store d elements in a temp array
   temp[] = [1, 2]
2) Shift rest of the arr[]
   arr[] = [3, 4, 5, 6, 7, 6, 7]
3) Store back the d elements
   arr[] = [3, 4, 5, 6, 7, 1, 2]


*/


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

void rotate(int arr[], int d, int n)
{
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
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
	rotate(arr, d, n);
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    cout<<arr[i]<<" ";
	}
	return 0;
}

