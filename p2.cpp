#include<iostream>
using namespace std;

class Vector
{
	private:
		int size;
		int *p;
	public:
		Vector()
		{
			size=-1;
			p=NULL;
		}
		
		Vector(int countofElement)
		{
			size=countofElement;
			p=new int[size];
		}
		void readVector()
		{
			for(int i=0;i<size;i++)
			{
				cout<<p[i]<<" ";
				cin>>p[i];
			}
		}
		~Vector()
		{
			delete p;
		}
		void showvector()
		{
			cout<<"[";
			for(int i=0;i<size;i++)
			{
				cout<<p[i]<<" ";
			}
			cout<<"]";
		}
};
int main()
{
		int n;
		cout<<"enter size of vector";
		cin>>n;
		Vector a(n);
		
		a.readVector();

		cout<<"vector a:";
		a.showvector();
		
	
}
