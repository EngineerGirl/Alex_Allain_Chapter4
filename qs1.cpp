/*
 ==============================================================================================================================
 Name        : qs1.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Ask the user for two users' ages, and indicate who is older; behave differently if both are over
100.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void age (int age1, int age2)
{
if (age1 >= 100 && age2 >= 100)
{
	cout<< "wow..u both r old"<<endl;	
}
else
{
	if(age1> age2)
	{
		cout << "Person 1 is older"<<endl;
	}
	else
	{
		cout<<"Person 2 is older"<<endl;
	}
}
}

int main()
{
	int a1,a2;
	cout<<"Person 1: Enter your age"<<endl;
	cin>>a1;
	cout<<"Person 2: Enter your age"<<endl;
	cin>>a2;
	age(a1,a2);

system("pause");
	return 0;	
}
