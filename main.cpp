#include <iostream>
#include <string>
#include "commands/commands.cpp"
int main()
{
using namespace std;
string command;
	while(1 == 1)
	{
	cin >> command;
	if(command == "")
		return 0;
	if(command != "")
		{
			if(command == "help")
				help();
			else if(command == "exit")
				exitTerminal();
			else
				cout << "Wrong command!" << endl;
		}
	}
}