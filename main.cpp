#include <iostream>
#include <string>
#include "commands/commands.cpp"
int main()
{
using namespace std;
string command;
	while(1 == 1)
	{
	cout << "Command: ";
	cin >> command;
	if(command == "")
		return 0;
	if(command != "")
		{
		//Here declare command words.
			if(command == "help")
				help();
			else if(command == "exit")
				exitTerminal();
			else if(command == "about")
				about();
			else
				cout << "Wrong command!" << endl; //If command is not declared.
		}
	}
}
