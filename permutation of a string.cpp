#include <iostream>
using namespace std;

void swap(char& a, char& b)

{

    char temp;

    temp = a;

    a = b;

    b = temp;

}


void permutation(string s,int i,int n)
{
    static int count ;int j;
    
if(i==n)
{
    count++;
    cout<<count<<s<<"\t";
    
}
else
{
    for(int j=i;j<=n;j++)
    {
        swap(s[i],s[j]);
        permutation(s, i+1, n);
        swap(s[i],s[j]);
    }
    
}

}

int main() 
{
    string s;

    cout << "Enter the string : ";

    cin >> s;

    cout << endl << "The permutations of the given string : " << endl;

    permutation(s, 0, s.length()-1);

    cout << endl;
}

