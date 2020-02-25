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
		String(String& x)
		{
			str=new char[strlen(x.str)+1];
			strcpy(str,x.str);
		}
		void  show()
		{
			cout<<str<<endl;
		}
		~String()
		{
			delete str;
		}
};
int main()
{

	String s1("hello");
	s1.show();
	String s2(s1);
	s2.show();
	


}
