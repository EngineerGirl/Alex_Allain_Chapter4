/*
 ==============================================================================================================================
 Name        : qs2.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Implement a simple "password" system that takes a password in the form of a number. Make it
so that either of two numbers are valid, but use only one if statement to do the check.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void password(int no1, int no2)
{
	int enter_pwd;
	cout<<"Please enter any one of your passwords to login"<<endl;
	cin>>enter_pwd;
		if ( enter_pwd == no1 || enter_pwd == no2)
			cout << "Password is correct \n";
		else cout<< "Incorrect Password \n";
}

int main()
{
	int pwd1,pwd2;
	cout<<"Enter your two numbers that can be used as your password:"<<endl;
	cin>>pwd1;
	cin>>pwd2;
	password(pwd1,pwd2);

system("pause");
	return 0;	
}
