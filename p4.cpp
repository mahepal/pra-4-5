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
		~String()
		{
			delete str;
		}
};
int main()
{

	String s1();
	//s1.show();
	String s2("ddu");
	s2.show();
	


}
