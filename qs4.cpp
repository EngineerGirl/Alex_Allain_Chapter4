/*
 ==============================================================================================================================
 Name        : qs4.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Expand the password checking program from earlier in this chapter and make it take multiple
               usernames, each with their own password, and ensure that the right username is used for the
               right password. Provide the ability to prompt user's again if the first login attempt failed. Think
               about how easy (or hard) it is to do this for a lot of usernames and passwords.
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
int i =0;
int username1;
string password1;

while (i<3)
	{
		cout<<"Enter your username: "<<endl;
		cin >> username1;
		cout<<"Enter your Password: "<<endl;
		cin >> password1;
			if ((username1 == 1 && password1 == "rose") || (username1 == 2 && password1 == "jasmine") || (username1 == 3 && password1 =="lotus"))
			{
				cout << "welcome!! \n"; break;
			}
			else
			{i++; 
			cout << "try again \n";
			}
	}
			if(i==3)
			cout<< "Sorry...you have exceeded your trials"<<endl;
system("pause");
	return 0;	
}
