#include <iostream>
#include <string>
#include <unistd.h>
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
			else if(command == "calculator" || command == "calc")
				calculator();
			else if(command == "version")
				version();
			else if(command == "timer" || command == "waitfor")
			{
			//This code must be moved in another file.
				int time;
				int currtime;
				cin >> time;
				if(cin.fail())
				{
				cout << "One of the numbers is invalid!" << endl;
				cin.clear();
				}
				cout << "Timer started!" << endl;
					while(currtime <= time)
					{
					sleep(1);
					cout << currtime << endl;
					if(currtime == time)
						cout << time << " seconds passed!" <<endl;
					currtime++;
					}
					currtime = 0;
			}
			else if(command == "credits")
				credits();
			else
				cout << "Wrong command!" << endl; //If command is not declared.
		}
	}
}
