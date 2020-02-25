#include<iostream>
using namespace std;

int max(int x,int y)
{
	if(x>y)
	{
		return x;
		//cout<<x<<"is greater"<<endl;
	}
	else
	{
		return y;
		//cout<<y<<"is greater"<<endl;
	}
	
}
int main()
{
	//cout<<&max;
	int (*p) (int,int);
	p=&max;
	
	//cout<<(*p)(10,20);
	int ans=(*p) (10,20);
	cout<<ans;
	cout<<endl;	
}
