#include<iostream>
using namespace std;



int main()
{
		int arr[4];
		int *p=&arr[0];
		
		for(int i=0;i<4;i++)
		    p[i]=i;

		for(int i=0;i<4;i++)
		{
			cout<<*(p+i)<<endl;
			cout<<p[i];
		}
}

