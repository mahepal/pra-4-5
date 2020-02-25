#include<iostream>
using namespace std;

void pointer_cons(int i)
{
	const int* p=&i;
	cout<<(*p)<<endl;
}
void cons_pointer(int i)
{
	int* const p=&i;
	cout<<(*p)<<endl;
}
int main()
{
	int i=7;
	pointer_cons(i);

	cons_pointer(i);
	cout<<endl;
}
