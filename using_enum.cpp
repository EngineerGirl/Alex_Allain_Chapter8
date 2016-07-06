/*
 ==============================================================================================================================
 Name        : using_enum.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a menu program that lets the user select from a list of options, and if the input is not one
               of the options, reprint the list
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;



enum Colors
{
red,
green,
yellow,
blue
};

Colors screen_color;

int main()
{
	char c;
cout<<"Enter r / g"<< endl;
cin>> c;
if (c == 'r')
{
	screen_color = red;
}
else screen_color = green;

switch(screen_color)
{
case red: cout<<"lal"<<endl; break;
case green: cout<<"hirawa"<<endl;break;
case yellow: cout<<"pivla"<<endl;break;
case blue: cout<< "nila"<<endl;break;
default: cout<<"wrong color"<<endl;break;
}

system ("pause");
return 0;
}
