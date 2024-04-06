#include<iostream>
using namespace std;
int main(int add)

{
	char op;
	int num1,num2;
	cout<<"ENter operator";
	cin>>op;
	cout<<"numbers is";
	cin>>num1>>num2;
	
	switch(op){
		case '+':
			cout<<"addition"<<num1+num2;
	}
}
