#include<iostream>
using namespace std;

class Date
{
	private:
		int dd,mm,yyyy;
	public:
		Date()
		{
			dd=1;
			mm=1;
			yyyy=2020;
		}
		Date(int d,int m,int y)
		{
			dd=d;
			mm=m;
			yyyy=y;
		}
		void read()
		{
			cout<<
		}
		Date operator ++(int)
		{
			
			

		

		
		/*Vector operator ++()//prefix
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
		}*/
		void show()
		{
			cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
		}
};
int main()
{
	Date d1(8,9,1998),d2;
	d1.show();
	d2=d1++;
	d2.show();
}
