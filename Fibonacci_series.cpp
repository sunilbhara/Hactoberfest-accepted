#include<iostream>
using namespace std;

int main()
{
    int a,b,n,fabo;
    a=0;
    b=1;
    cout<<"Enter the nth term : "<<endl;
    cin>>n;

    

    for(int i=1; i<n ;i++)
    {
        if(i==1)
        {
            cout<<a<<" ";
        }
        if(i==2)
        {
            cout<<b<<" ";
        }

        fabo = a+b;
        a=b;
        b=fabo;
        cout<<fabo<<" ";
    }
	return 0;
}