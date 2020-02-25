#include<iostream>
using namespace std;

int **create(int row,int col)
{
	int **p;
	p=new int *[row];
	for(int i=0;i<row;i++)
	p[i]=new int[col];
	return p;
}

void read(int **b,int row,int col)
{
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			cout<<"enter value:";
			cin>>b[i][j];
		}
}

void show(int **b,int row,int col)
{
	for(int i=0;i<row;i++)
	{
		cout<<endl;
		for(int j=0;j<col;j++)
		cout<<b[i][j]<<" ";
		cout<<endl;
	}
}
void release(int **p,int r)
{
	for(int i=0;i<r;i++)
		delete p[i];
	delete p;
}

int main()
{
		int **b;
		int r,c;
		cout<<"enter the no of rows:";
		cin>>r;
		
		cout<<"enter the no of columns:";
		cin>>c;

		b=create(r,c);
		read(b,r,c);
		show(b,r,c);
		release(b,r);	
}
