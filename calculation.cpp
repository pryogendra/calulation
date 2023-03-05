#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	int add,sub,mul,div,mod;
	
	cout<<"Enter two numbers here : ";
	cin>>n1;
	cin>>n2;
	
	add=n1+n2;
	cout<<"Addition of the entered number is :"<<add<<endl;
	sub=n1-n2;
	cout<<"Substuction of the entered number is :"<<sub<<endl;
	mul=n1*n2;
	cout<<"Multipication of the entered number is :"<<mul<<endl;
	div=n1/n2;
	cout<<"Division of the entered number is :"<<div<<endl;
	mod=n1%n2;
	cout<<"Modulas of the entered number is :"<<mod<<endl;
	
	return 0;
}
