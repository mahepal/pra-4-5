#include<iostream>
using namespace std;



int main()
{
		int arr[4];
		int *p=arr;
		
		for(int i=0;i<4;i++)
		p[i]=i;

		for(int i=0;i<4;i++)
		{
			cout<<*(p+i)<<endl;
		}
}

