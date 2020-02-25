#include<iostream>
using namespace std;

class Matrix
{
	private:
		int row,col;
		int **p;
	public:
		Matrix()
		{
			row=1;
			col=1;
			p=NULL;
		}
		Matrix(int countOfRows,int countOfColumns)
		{
			row=countOfRows;
			col=countOfColumns;
			p=new int *[row];
			for(int i=0;i<row;i++)
			p[i]=new int [col];
		}
		
		void readMatrix()
		{
			for(int i=0;i<row;i++)
			{
					for(int j=0;j<col;j++)
					{
						cout<<"enter elements:";
						cin>>p[i][j];
					}
			}
		}
		void showMatrix()
		{
			for(int i=0;i<row;i++)
			{
				cout<<"[";
				for(int j=0;j<col;j++)
				cout<<p[i][j]<<" ";
				cout<<"]"<<endl;
			}
		}
		~Matrix()
		{
			delete p;
		}
};
int main()
{
		
		int r,c;
		cout<<"enter rows and columns:";
		cin>>r>>c;
			
		Matrix a(r,c);
		a.readMatrix();	
		cout<<"matrix a:\n";
		a.showMatrix();
		//cout<<endl;
}
