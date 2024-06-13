#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int *p;
	int *q;
	p = &a;
	q=&b;
	a=1;
	b=5;
	 int c=*p+*q;
	cout<<"the value of a (from the actual variable type: "<<a<<endl;
	cout<<"the value of a from the pointer using *(astrix direction: "<<*p<<endl;
	cout<<"the value of c: "<<c<<endl;
	
}