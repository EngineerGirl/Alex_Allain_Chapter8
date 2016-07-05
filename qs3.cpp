/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a two-player tic-tac-toe game
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void ticTacToe()
{
	char c;
	char c1 ='_';
	char c2 ='_';
	char c3 ='_';
	char c4 ='_';
	char c5 ='_';
	char c6 ='_';
	char c7 ='_';
	char c8 ='_';
	char c9 ='_';
while (!((c1=='X'&&c2=='X'&&c3=='X')||(c4=='X'&&c5=='X'&&c6=='X')||(c7=='X'&&c8=='X'&&c9=='X')||\
   (c1=='X'&&c4=='X'&&c7=='X')||(c2=='X'&&c5=='X'&&c8=='X')||(c3=='X'&&c6=='X'&&c9=='X')||\
   (c1=='X'&&c5=='X'&&c9=='X')||(c3=='X'&&c5=='X'&&c9=='X')||\
   (c1=='O'&&c2=='O'&&c3=='O')||(c4=='O'&&c5=='O'&&c6=='O')||(c7=='O'&&c8=='O'&&c9=='O')||\
   (c1=='O'&&c4=='O'&&c7=='O')||(c2=='O'&&c5=='O'&&c8=='O')||(c3=='O'&&c6=='O'&&c9=='O')||\
   (c1=='O'&&c5=='O'&&c9=='O')||(c3=='O'&&c5=='O'&&c9=='O')))
{
	cout << " player1's chance (1-9)"<< endl;
	int s;
	cin>> s;
	s;
c='X';
	switch (s)
	{
case 1: 
	c1 =c ; 
	cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
case 2: c2 =c ;
	cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
	case 3: c3 =c;
		cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
		case 4:c4=c; 
				cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
			case 5: c5 =c ;
					cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
				case 6: c6=c; 
					cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
					case 7:c7=c; 
							cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
						case 8: c8=c;
								cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
							case 9:c9 = c; 
									cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
	
	}
		cout << " player2's chance (1-9)"<< endl;
	cin>> s;
	s;
	c = 'O';
	switch (s)
	{
case 1: 
	c1 =c ; 
	cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
case 2: c2 =c ;
	cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
	case 3: c3 =c;
		cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
		case 4:c4=c; 
				cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
			case 5: c5 =c ;
					cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
				case 6: c6=c; 
					cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
					case 7:c7=c; 
							cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
						case 8: c8=c;
								cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
							case 9:c9 = c; 
									cout<<c1<<" "<<c2<<" "<<c3<<endl<<c4<<" "<<c5<<" "<<c6<<endl<<c7<<" "<<c8<<" "<<c9<<endl;  break;
	
	}
}
if((c1=='X'&&c2=='X'&&c3=='X')||(c4=='X'&&c5=='X'&&c6=='X')||(c7=='X'&&c8=='X'&&c9=='X')||\
   (c1=='X'&&c4=='X'&&c7=='X')||(c2=='X'&&c5=='X'&&c8=='X')||(c3=='X'&&c6=='X'&&c9=='X')||\
   (c1=='X'&&c5=='X'&&c9=='X')||(c3=='X'&&c5=='X'&&c9=='X'))
cout <<"Player 1 wins!!"<< endl;

if((c1=='O'&&c2=='O'&&c3=='O')||(c4=='O'&&c5=='O'&&c6=='O')||(c7=='O'&&c8=='O'&&c9=='O')||\
   (c1=='O'&&c4=='O'&&c7=='O')||(c2=='O'&&c5=='O'&&c8=='O')||(c3=='O'&&c6=='O'&&c9=='O')||\
   (c1=='O'&&c5=='O'&&c9=='O')||(c3=='O'&&c5=='O'&&c9=='O'))
   cout << "Player2 wins!!"<<endl;

}

int main()
{
ticTacToe();
system ("pause");
return 0;
} // For an improved version of this code please look in Chapter 10 qs4.cpp
