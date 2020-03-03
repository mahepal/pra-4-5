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
		Vector (int sz)
		{
			setsize(sz);
			createVector();
		}		
		Vector setsize(int sz)
		{
			size=sz;
		}
		Vector(Vector& v)
		{
			size=v.size;
			p=v.p;
			createVector();
			for(int i=0;i<size;i++)
			p[i]=v.p[i];
		}
		void createVector()
		{
			p=new int[size];
		}
		void readVector()
		{
			for(int i=0;i<size;i++)
			{
				cout<<" Enter elements:";
				cin>>p[i];
			}
		}
		Vector operator ++(int)//postfix
		{
			cout<<"++Postfix called:"<<endl;
			Vector tmp(size);
			for(int i=0;i<size;i++)
			tmp.p[i]=p[i]++;
			return tmp;
		}
		Vector operator ++()//prefix
		{
			cout<<"++Prefix called:"<<endl;
			Vector tmp(size);
			for(int i=0;i<size;i++)
			tmp.p[i]=++p[i];
			return tmp;
		}
			Vector operator --(int)//postfix
		{
			cout<<"--Postfix called:"<<endl;
			Vector tmp(size);
			for(int i=0;i<size;i++)
			tmp.p[i]=p[i]--;
			return tmp;
		}
		Vector operator --()//prefix
		{
			cout<<"--Prefix called:"<<endl;
			Vector tmp(size);
			for(int i=0;i<size;i++)
			tmp.p[i]=--p[i];
			return tmp;
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
		Vector v(4),y,z;
			
		v.readVector();
		v.showvector();
		cout<<endl;
		y=v++;
		v.showvector();
		y.showvector();
		cout<<endl;

		
		v.showvector();
		cout<<endl;
		y=++v;
		v.showvector();
		y.showvector();
		cout<<endl;	

		
		v.showvector();
		cout<<endl;
		y=v--;
		v.showvector();
		y.showvector();
		cout<<endl;

		
		v.showvector();
		cout<<endl;
		y=--v;
		v.showvector();
		y.showvector();
		cout<<endl;	
		
	
}
