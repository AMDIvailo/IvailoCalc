#include <iostream>
#include <string>
#include "commands/commands.cpp"
#include "scripting/msghandler.cpp"
int main()
{
using namespace std;
string command;
msghandler* text;
	while(1 == 1)
	{
	text->print("Command: ", false);
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
			else if(command == "calculator" || command == "calc")
				calculator();
			else if(command == "version")
				version();
			else
				text->print("Wrong command!"); //If command is not declared.
		}
	}
}
