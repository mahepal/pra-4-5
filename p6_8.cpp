#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		char *str;
	public:
		String()
		{
			str=NULL;
		}
		String(char *s)
		{
			str=new char[strlen(s)+1];
			strcpy(str,s);
		}
		void  show()
		{
			cout<<str<<endl;
		}
		String operator ++(int)
		{
			String tmp(str);
			for(int i=0;str[i]!='\0';i++)
			{
				if(str[i]>=65 && str[i]<=91)
					str[i]+=32;
			}
			return str;
		}
		String operator ++(int)
		{
			String tmp(str);
			for(int i=0;str[i]!='\0';i++)
			{
				if(str[i]>=98 && str[i]<=112)
					str[i]+=32;
			}
			return str;
		}
};
int main()
{

	String s1("PRIYANKA"),s2;
	//s1.show();
	s1.show();
	s2=s1++;

	s2.show();
	


}
