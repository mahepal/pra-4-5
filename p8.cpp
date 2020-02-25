#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		int rollno;
		char name[10];
		float cpp,c,java;
	public:
		Student()
		{
			rollno=1;
			//name=null;
			cpp=c=java=1;
			cout<<"default  constructor  are called"<<endl;
		}
		Student(int rno, char nm[], float cmarks, float cppmarks,float javamarks)
		{
			rollno=rno;
			strcpy(name,nm);
			c=cmarks;
			cpp=cppmarks;
			java=javamarks;
			cout<<"parameterize constructor called():"<<endl;
		}
		Student(Student& s)
		{
			rollno=s.rollno;
			strcpy(name,s.name);
			c=s.c;
			cpp=s.cpp;
			java=s.java;
			cout<<"copy constructor called():"<<endl;
		}
		void show()
		{
			cout<<"rollno="<<rollno<<endl;
			cout<<"name="<<name<<endl;
			cout<<"c marks="<<c<<endl;
			cout<<"cpp marks="<<cpp<<endl;
			cout<<"java marks="<<java<<endl;
		}
};
int main()
{
		Student s1;
		s1.show();
		Student s2(1,"priyanka",85,74,75);
		
		s2.show();
	Student s3(s2);
		s3.show();
		
}
